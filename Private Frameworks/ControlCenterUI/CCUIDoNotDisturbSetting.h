//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUISettingModule.h>

@class BBBehaviorOverride, BBSettingsGateway;

@interface CCUIDoNotDisturbSetting : CCUISettingModule
{
    BBSettingsGateway *_settingsGateway;
    BBBehaviorOverride *_activeOverride;
    long long _activeStatus;
    _Bool _DNDEnabled;
}

+ (id)statusOffString;
+ (id)statusOnString;
+ (id)displayName;
+ (id)identifier;
@property(nonatomic, getter=_isDNDEnabled, setter=_setDNDEnabled:) _Bool DNDEnabled; // @synthesize DNDEnabled=_DNDEnabled;
- (void).cxx_destruct;
- (_Bool)_isStateOverridden;
- (_Bool)_stateWithEffectiveOverrides;
- (id)glyphImageForState:(int)arg1;
- (id)statusUpdate;
- (void)_updateActiveOverrides:(id)arg1;
- (void)_setDNDEnabled:(_Bool)arg1 updateServer:(_Bool)arg2 source:(unsigned long long)arg3;
- (void)_setDNDStatus:(long long)arg1;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)_tearDown;
- (void)deactivate;
- (void)activate;
- (id)selectedStateColor;
- (id)aggdKey;
- (void)dealloc;

@end

