import { Injectable } from '@nestjs/common';
import { FriendCreateDto } from './dto/friend-create.dto';
import { FriendRepository } from './friend.repository';
import { promises } from 'dns';
import { UserRepository } from 'src/auth/user.repository';
import { Friend } from './friend.entity';

@Injectable()
export class FriendService {
    constructor(
        private friendRepository: FriendRepository,
        private userRepository: UserRepository
    ) { }

    async friendRequest(friendCreateDto: FriendCreateDto): Promise<Friend>{
        const { fromUser, toUser } = friendCreateDto;

        console.log("유저조회")
        const user1 = await this.userRepository.findUser(fromUser)
        const user2 = await this.userRepository.findUser(toUser)
        console.log("조회됨")

        return this.friendRepository.createFriend(user1,user2);
    }
}
