/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:11 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/NCNotificationListViewController.h>

@protocol UIViewControllerTransitionCoordinator;
@class NCNotificationPriorityList, NCAnimationCoordinator, NCNotificationRequest;

@interface NCNotificationPriorityListViewController : NCNotificationListViewController {

	NCNotificationPriorityList* _notificationRequestList;
	NCAnimationCoordinator* _requestOperationAnimationCoordinator;
	id<UIViewControllerTransitionCoordinator> _lastDismissalTransitionCoordinator;
	NCNotificationRequest* _notificationRequestWithHintText;

}

@property (nonatomic,retain) NCNotificationPriorityList * notificationRequestList;                                      //@synthesize notificationRequestList=_notificationRequestList - In the implementation block
@property (nonatomic,retain) NCAnimationCoordinator * requestOperationAnimationCoordinator;                             //@synthesize requestOperationAnimationCoordinator=_requestOperationAnimationCoordinator - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitionCoordinator> lastDismissalTransitionCoordinator;              //@synthesize lastDismissalTransitionCoordinator=_lastDismissalTransitionCoordinator - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * notificationRequestWithHintText;                                   //@synthesize notificationRequestWithHintText=_notificationRequestWithHintText - In the implementation block
-(id)init;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)hasContent;
-(void)fadeIn;
-(void)clearAll;
-(BOOL)shouldAddHintTextForNotificationViewController:(id)arg1 ;
-(void)notificationViewController:(id)arg1 didCommitToLongLookPresentation:(BOOL)arg2 withCoordinator:(id)arg3 ;
-(void)collectionView:(id)arg1 performUpdatesAlongsideLayout:(id)arg2 ;
-(void)setRequestOperationAnimationCoordinator:(NCAnimationCoordinator *)arg1 ;
-(BOOL)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(NCNotificationPriorityList *)notificationRequestList;
-(void)_createRequestOperationAnimationCoordinatorForInitialContentPresentation:(BOOL)arg1 ;
-(id)_prepareHintTextForNotificationRequest:(id)arg1 movingFromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)_updateRaiseToListenRequest;
-(void)_reloadNotificationViewControllerForHintTextAtIndexPaths:(id)arg1 ;
-(void)_performRequestOperationAlongsideAnimations;
-(BOOL)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(NCNotificationRequest *)notificationRequestWithHintText;
-(void)_reloadNotificationViewControllerForHintTextAtIndexPath:(id)arg1 ;
-(void)setNotificationRequestWithHintText:(NCNotificationRequest *)arg1 ;
-(id)notificationRequestAtIndexPath:(id)arg1 ;
-(void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2 ;
-(void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2 ;
-(void)reloadRequestsWithSuppressedContent;
-(void)clearAllNonPersistent;
-(BOOL)hasVisibleContent;
-(void)setNotificationRequestList:(NCNotificationPriorityList *)arg1 ;
-(NCAnimationCoordinator *)requestOperationAnimationCoordinator;
-(id<UIViewControllerTransitionCoordinator>)lastDismissalTransitionCoordinator;
-(void)setLastDismissalTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
@end

