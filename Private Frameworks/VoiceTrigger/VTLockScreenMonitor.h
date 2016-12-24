/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:32 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLockScreenMonitor : VTEventMonitor {

	int _notifyToken;
	unsigned char _lockScreenState;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned char)lockScreenState;
-(unsigned char)_checkLockScreenState;
-(void)_didReceiveLockScreenStateChanged:(unsigned char)arg1 ;
-(id)lockScreenStateDescription:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withLockScreenState:(unsigned char)arg2 ;
-(void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)arg1 ;
@end

