//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NCNotificationViewControllerDelegate-Protocol.h"

@class NCNotificationRequest, NCNotificationViewController;
@protocol NCNotificationStaticContentProviding;

@protocol NCNotificationViewControllerDelegatePrivate <NCNotificationViewControllerDelegate>

@optional
- (id <NCNotificationStaticContentProviding>)notificationViewController:(NCNotificationViewController *)arg1 staticContentProviderForNotificationRequest:(NCNotificationRequest *)arg2;
@end
