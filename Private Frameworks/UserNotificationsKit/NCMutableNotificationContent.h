/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:29:37 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <UserNotificationsKit/NCNotificationContent.h>

@class NSString, UIImage, NSDate, NSTimeZone;

@interface NCMutableNotificationContent : NCNotificationContent

@property (nonatomic,copy) NSString * header; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * topic; 
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) UIImage * attachmentImage; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
-(void)setTitle:(NSString *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(void)setDateAllDay:(BOOL)arg1 ;
-(void)setAttachmentImage:(UIImage *)arg1 ;
@end

