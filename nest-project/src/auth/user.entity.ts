import { Friend } from "src/friend/friend.entity";
import { BaseEntity, Column, Entity, OneToMany, PrimaryGeneratedColumn, Unique } from "typeorm";

@Entity({name: 'tb_user'})
export class User extends BaseEntity {
    @PrimaryGeneratedColumn()
    @Column({name : 'user_id'})
    userId: number;

    @Column()
    address: string;

    @Column()
    passwd: string;

    @Column()
    email: string;

    @Column()
    salt: string;

    @Column()
    nisckname: string;

    @Column({name: 'refresh_token'})
    refreshToken: string;

    @Column({ type: 'datetime', name: 'create_at' })
    createAt: Date;

    @Column({ type: 'datetime' })
    latest_login: Date;
    
    @Column()
    guest_id: string;

    @OneToMany(type => Friend, friend => friend.fromUser, { eager: true })
    sentFriend: Friend[] 

    @OneToMany(type => Friend, friend => friend.fromUser, { eager: true })
    receivFriend: Friend[] 
}