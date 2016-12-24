/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:12 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCAttachmentViewController.h>

@class AVPlayerViewController, NCMediaPlayPauseButton;

@interface NCVideoAttachmentViewController : NCAttachmentViewController {

	AVPlayerViewController* _playerViewController;
	NCMediaPlayPauseButton* _playPauseButton;
	CGSize _contentSize;

}

@property (nonatomic,retain) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) NCMediaPlayPauseButton * playPauseButton;                   //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                         //@synthesize contentSize=_contentSize - In the implementation block
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(AVPlayerViewController *)playerViewController;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)_pause;
-(void)_play;
-(void)_mediaPlayPauseButtonTapped:(id)arg1 ;
-(id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2 ;
-(void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1 ;
-(void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1 ;
-(CGSize)_sizeForVideoAsset:(id)arg1 ;
-(NCMediaPlayPauseButton *)playPauseButton;
-(void)_mediaPlayPauseButtonUpdateSize;
-(void)_rewind;
-(void)setPlayPauseButton:(NCMediaPlayPauseButton *)arg1 ;
@end

