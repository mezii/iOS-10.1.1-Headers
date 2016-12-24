/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:11 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCNotificationShortLookViewController.h>

@class UIView;

@interface NCLegacyNotificationShortLookViewController : NCNotificationShortLookViewController {

	UIView* _backgroundView;

}

@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_updateScrollViewContentSize;
-(void)_updateWithProvidedCustomContent;
-(void)_configureScrollViewIfNecessary;
-(void)_loadLookView;
-(void)_notificationViewControllerViewDidLoad;
-(BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
-(void)_setupCustomContentProvider;
-(void)_setCustomContentProvidingViewController:(id)arg1 ;
-(BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)presentLongLook:(/*^block*/id)arg1 ;
-(void)expandAndPlayAudioMessage;
-(id)_legacyLookViewIfLoaded;
-(void)_backgroundTapGesture:(id)arg1 ;
-(void)_resizeLegacyScrollViewToFitContentSize;
-(BOOL)_tryDismissingShortLookInScrollView:(id)arg1 ;
-(void)_resizeLegacyScrollViewToFitContentSizeWithKeyboardFrame:(CGRect)arg1 ;
-(void)_finishAdditionalContentReveal;
-(id)_newTransitionManager;
-(CGSize)_preferredCustomContentSizeForSize:(CGSize)arg1 ;
-(void)transitioningDelegate:(id)arg1 didFinishDismissalOfViewController:(id)arg2 completed:(BOOL)arg3 ;
@end

