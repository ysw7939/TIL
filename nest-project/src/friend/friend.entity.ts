import { User } from "src/auth/user.entity";
import { BaseEntity, Column, Entity, ManyToOne, OneToMany,JoinColumn, PrimaryGeneratedColumn, Unique } from "typeorm";

@Entity({name : 'tb_friend'})
export class Friend extends BaseEntity {
    @PrimaryGeneratedColumn({ primaryKeyConstraintName: "friend_request_id" })
    friendId: number; 
    
    @Column({ type: 'tinyint', name:'is_friend', default:false })
    isFriend: boolean;

    @Column({ type: 'timestamp', name: 'created_at', default: () => 'CURRENT_TIMESTAMP' })
    createdAt: Date;

    @Column({ type: 'datetime', name : 'complyed_at',nullable:true })
    complyedAt: Date;

    @ManyToOne(type => User, user => user.sentFriend, { eager: false })
    @JoinColumn({ name: 'from_user' }) 
    fromUser: User;

    @ManyToOne(type => User, user => user.receivFriend, { eager: false })
    @JoinColumn({ name: 'to_user' })
    toUser: User;

    @Column({ type: 'tinyint' ,default: false})
    isRead: boolean;
}