/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:12 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet;

@interface NCNotificationPriorityList : NSObject {

	NSMutableOrderedSet* _requests;

}

@property (nonatomic,retain) NSMutableOrderedSet * requests;              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)requestAtIndex:(unsigned long long)arg1 ;
-(NSMutableOrderedSet *)requests;
-(void)setRequests:(NSMutableOrderedSet *)arg1 ;
-(BOOL)containsNotificationRequestMatchingRequest:(id)arg1 ;
-(unsigned long long)insertionIndexForNotificationRequest:(id)arg1 ;
-(unsigned long long)insertNotificationRequest:(id)arg1 ;
-(unsigned long long)indexOfNotificationRequestMatchingRequest:(id)arg1 ;
-(unsigned long long)modifyNotificationRequest:(id)arg1 ;
-(unsigned long long)removeNotificationRequest:(id)arg1 ;
-(id)clearAllRequests;
-(id)clearNonPersistentRequests;
-(unsigned long long)_insertionIndexForNotificationRequest:(id)arg1 ;
-(unsigned long long)_indexOfRequestMatchingNotificationRequest:(id)arg1 ;
-(id)_clearRequestsWithPersistence:(unsigned long long)arg1 ;
-(id)_identifierForNotificationRequest:(id)arg1 ;
@end

