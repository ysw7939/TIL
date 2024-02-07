import { ConflictException, InternalServerErrorException } from "@nestjs/common";
import { DataSource, Repository } from "typeorm";
import { Injectable } from "@nestjs/common";
import { FriendCreateDto } from "./dto/friend-create.dto";
import { Friend } from "./friend.entity";
import { UserRepository } from "src/auth/user.repository";
import { User } from "src/auth/user.entity";


@Injectable()
export class FriendRepository extends Repository<Friend>{
    

    constructor(dataSource: DataSource, ) {
        super(Friend, dataSource.createEntityManager());

    }

    async createFriend(fromUser: User, toUser: User ): Promise<Friend>{
     

        
        const friend = this.create({ fromUser, toUser })
        let friendRequest;
        try {
            friendRequest =  this.save(friend)
        }catch (error) {
            if(error.code === '23505') {
                throw new ConflictException('Existing username');
            } else {
                throw new InternalServerErrorException();
            }
        }

        return friendRequest;
    }
}