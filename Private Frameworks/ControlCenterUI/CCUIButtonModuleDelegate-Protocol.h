//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIButtonModule;
@protocol CCUIControlCenterSystemAgent;

@protocol CCUIButtonModuleDelegate <NSObject>
- (void)buttonModule:(CCUIButtonModule *)arg1 willExecuteSecondaryActionWithCompletionHandler:(void (^)(void))arg2;
- (id <CCUIControlCenterSystemAgent>)controlCenterSystemAgent;
- (void)buttonModulePropertiesDidChange:(CCUIButtonModule *)arg1;
- (void)buttonModuleStateDidChange:(CCUIButtonModule *)arg1;
@end

