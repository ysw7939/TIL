import { Injectable } from '@nestjs/common';
import { InjectRepository } from '@nestjs/typeorm';
import { UserRepository } from './user.repository';
import { AuthCreateDto } from './dto/auth-create.dto';

@Injectable()
export class AuthService { 
    constructor(
        @InjectRepository(UserRepository)
        private userRepository: UserRepository,
    ) { }

        async signUp(authCreateDto: AuthCreateDto): Promise<void> {
        return this.userRepository.createUser(authCreateDto);
    }
} 