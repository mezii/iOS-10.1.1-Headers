/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:11 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCShortLookView.h>
#import <libobjc.A.dylib/NCNotificationStaticContentAccepting.h>

@class NCLookViewFontProvider, NCNotificationContentView, NCNotificationGrabberView, NSString, UIImage, NSDate, NSTimeZone, NSArray, UIView;

@interface NCNotificationShortLookView : NCShortLookView <NCNotificationStaticContentAccepting> {

	NCLookViewFontProvider* _fontProvider;
	NCNotificationContentView* _notificationContentView;
	NCNotificationGrabberView* _grabberView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (getter=isDateAllDay,nonatomic,readonly) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * primarySubtitleText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,retain) NSArray * interfaceActions; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (assign,nonatomic) long long thumbnailViewContentMode; 
@property (nonatomic,copy) NSString * hintText; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) BOOL showAdditionalMessageLines; 
@property (assign,nonatomic) unsigned long long messageNumberOfLines; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(NSString *)secondaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setHintText:(NSString *)arg1 ;
-(void)setInterfaceActions:(NSArray *)arg1 ;
-(NSArray *)interfaceActions;
-(void)setMessageNumberOfLines:(unsigned long long)arg1 ;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(NSString *)arg1 ;
-(void)setThumbnailViewContentMode:(long long)arg1 ;
-(BOOL)_configureHeaderContentViewIfNecessary;
-(void)_configureNotificationContentViewIfNecessary;
-(long long)thumbnailViewContentMode;
-(NSString *)hintText;
-(BOOL)showAdditionalMessageLines;
-(void)setShowAdditionalMessageLines:(BOOL)arg1 ;
-(unsigned long long)messageNumberOfLines;
-(id)_notificationContentView;
-(id)_fontProvider;
-(void)_setFontProvider:(id)arg1 ;
-(id)_newNotificationContentView;
-(void)_layoutGrabber;
-(BOOL)_shouldShowGrabber;
-(id)_grabberView;
-(NSString *)primaryText;
@end

