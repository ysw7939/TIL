import { ConflictException, InternalServerErrorException } from "@nestjs/common";
import { DataSource, Repository } from "typeorm";
import { User } from "./user.entity";
import { Injectable } from "@nestjs/common";
import { AuthCreateDto } from "./dto/auth-create.dto";
import * as bcrypt from 'bcryptjs';

@Injectable()
export class UserRepository extends Repository<User> {
    // 사용자 관련 커스텀 메서드들을 추가할 수 있음
    constructor(dataSource: DataSource) {
        super(User, dataSource.createEntityManager());
    }

    async createUser(authCreateDto: AuthCreateDto): Promise<void>{
        const { address, passwd } = authCreateDto;

        const salt = await bcrypt.genSalt();
        const hashedPasswd = await bcrypt.hash(passwd, salt);

        const user = this.create({address, passwd})
        try {
            await this.save(user)
        }catch (error) {
            if(error.code === '23505') {
                throw new ConflictException('Existing username');
            } else {
                throw new InternalServerErrorException();
            }
        }
    }
}