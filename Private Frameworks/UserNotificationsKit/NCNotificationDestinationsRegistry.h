/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:29:37 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/NCDebugInfoProvider.h>

@class NSMutableDictionary, NSArray, NSString;

@interface NCNotificationDestinationsRegistry : NSObject <NCDebugInfoProvider> {

	NSMutableDictionary* _destinations;
	NSMutableDictionary* _activeDestinations;
	NSMutableDictionary* _readyDestinations;

}

@property (nonatomic,copy) NSMutableDictionary * destinations;                    //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * activeDestinations;              //@synthesize activeDestinations=_activeDestinations - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * readyDestinations;               //@synthesize readyDestinations=_readyDestinations - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * registeredDestinations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)count;
-(NSMutableDictionary *)destinations;
-(void)setDestinations:(NSMutableDictionary *)arg1 ;
-(id)debugInfoPlist;
-(void)registerDestination:(id)arg1 ;
-(void)unregisterDestination:(id)arg1 ;
-(void)setDestination:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setDestination:(id)arg1 ready:(BOOL)arg2 ;
-(BOOL)isRegisteredDestination:(id)arg1 ;
-(id)destinationsForRequestDestinations:(id)arg1 ;
-(NSArray *)registeredDestinations;
-(id)readyDestinationsForRequestDestinations:(id)arg1 ;
-(void)registerDestination:(id)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)activeDestinations;
-(NSMutableDictionary *)readyDestinations;
-(id)_destinationsForRequestDestinations:(id)arg1 inDestinationDict:(NSMutableDictionary*)arg2 ;
-(void)setDestinationWithIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_registeredDestinationsDebugInfo;
-(id)_activeDestinationsDebugInfo;
-(BOOL)hasActiveDestinationsForRequest:(id)arg1 ;
-(id)destinationIdentifiersForRequestDestinations:(id)arg1 ;
-(void)setActiveDestinations:(NSMutableDictionary *)arg1 ;
-(void)setReadyDestinations:(NSMutableDictionary *)arg1 ;
@end

