import { Module } from '@nestjs/common';
import { FriendController } from './friend.controller';
import { FriendService } from './friend.service';
import { TypeOrmModule } from '@nestjs/typeorm';
import { Friend } from './friend.entity';
import { FriendRepository } from './friend.repository';
import { UserRepository } from 'src/auth/user.repository';

@Module({
  imports: [
    TypeOrmModule.forFeature([Friend])
  ],
  controllers: [FriendController],
  providers: [FriendService, FriendRepository, UserRepository]
})
export class FriendModule {}
