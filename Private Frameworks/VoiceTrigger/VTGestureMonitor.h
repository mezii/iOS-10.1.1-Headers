/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:32 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VTGestureMonitorDelegate;
@interface VTGestureMonitor : NSObject {

	id<VTGestureMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VTGestureMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultGestureMonitor;
-(void)setDelegate:(id<VTGestureMonitorDelegate>)arg1 ;
-(id<VTGestureMonitorDelegate>)delegate;
-(void)startObserving;
@end

