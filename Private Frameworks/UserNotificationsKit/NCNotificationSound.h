/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:29:37 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary, TLAlertConfiguration;

@interface NCNotificationSound : NSObject <BSDescriptionProviding> {

	long long _soundType;
	unsigned _systemSoundID;
	unsigned long long _soundBehavior;
	NSString* _ringtoneName;
	NSDictionary* _vibrationPattern;
	BOOL _repeats;
	double _maxDuration;
	NSDictionary* _controllerAttributes;
	NSString* _songPath;
	TLAlertConfiguration* _alertConfiguration;

}

@property (nonatomic,readonly) long long soundType;                                         //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,readonly) unsigned systemSoundID;                                      //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (nonatomic,readonly) unsigned long long soundBehavior;                            //@synthesize soundBehavior=_soundBehavior - In the implementation block
@property (nonatomic,copy,readonly) NSString * ringtoneName;                                //@synthesize ringtoneName=_ringtoneName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * vibrationPattern;                        //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (getter=isRepeating,nonatomic,readonly) BOOL repeats;                             //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,readonly) double maxDuration;                                          //@synthesize maxDuration=_maxDuration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * controllerAttributes;                    //@synthesize controllerAttributes=_controllerAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSString * songPath;                                    //@synthesize songPath=_songPath - In the implementation block
@property (nonatomic,copy,readonly) TLAlertConfiguration * alertConfiguration;              //@synthesize alertConfiguration=_alertConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)soundType;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)systemSoundID;
-(BOOL)isRepeating;
-(NSDictionary *)vibrationPattern;
-(NSString *)songPath;
-(NSDictionary *)controllerAttributes;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)maxDuration;
-(unsigned long long)soundBehavior;
-(NSString *)ringtoneName;
-(TLAlertConfiguration *)alertConfiguration;
-(id)initWithNotificationSound:(id)arg1 ;
@end

