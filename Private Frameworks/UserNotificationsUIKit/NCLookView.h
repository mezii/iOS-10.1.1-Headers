/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:12 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage, NSString, NSDate, NSTimeZone, UIButton, UIView;


@protocol NCLookView <NSObject,NCContentSizeCategoryAdjusting>
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (nonatomic,readonly) UIButton * iconButton; 
@property (nonatomic,readonly) UIButton * utilityButton; 
@property (nonatomic,readonly) UIView * customContentView; 
@property (assign,getter=isBanner,nonatomic) BOOL banner; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred; 
@property (nonatomic,retain) UIView * colorInfusionView; 
@required
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setTimeZone:(id)arg1;
-(NSDate *)date;
-(void)setDate:(id)arg1;
-(void)setIcon:(id)arg1;
-(NSTimeZone *)timeZone;
-(UIImage *)icon;
-(UIView *)customContentView;
-(BOOL)isBanner;
-(CGSize*)sizeThatFitsContentWithSize:(CGSize)arg1;
-(CGSize*)contentSizeForSize:(CGSize)arg1;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1;
-(long long)dateFormatStyle;
-(void)setDateFormatStyle:(long long)arg1;
-(UIButton *)utilityButton;
-(void)setBanner:(BOOL)arg1;
-(BOOL)isBackgroundBlurred;
-(void)setBackgroundBlurred:(BOOL)arg1;
-(UIView *)colorInfusionView;
-(void)setColorInfusionView:(id)arg1;
-(UIButton *)iconButton;

@end

