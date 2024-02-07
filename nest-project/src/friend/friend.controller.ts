import { Controller, ValidationPipe,Post,Body } from '@nestjs/common';
import { FriendService } from './friend.service';
import { FriendCreateDto } from './dto/friend-create.dto';
import { Friend } from './friend.entity';

@Controller('friend')
export class FriendController {
    constructor(private friendService: FriendService) { }
    
    @Post('/create')
    create(@Body(ValidationPipe) friendCreateDto: FriendCreateDto): Promise<Friend> {
        return this.friendService.friendRequest(friendCreateDto);
    }
}
