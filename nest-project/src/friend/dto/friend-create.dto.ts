import { User } from "src/auth/user.entity";

export class FriendCreateDto {
    fromUser: number;
    toUser: number;
}