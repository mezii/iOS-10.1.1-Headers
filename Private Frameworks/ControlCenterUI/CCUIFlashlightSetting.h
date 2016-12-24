//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUISettingModule.h>

@class AVFlashlight, NSObject;
@protocol OS_dispatch_queue;

@interface CCUIFlashlightSetting : CCUISettingModule
{
    AVFlashlight *_flashlight;
    NSObject<OS_dispatch_queue> *_flashlightQueue;
    _Bool _stayWarm;
    float _flashlightLevel;
    _Bool _flashlightOn;
}

+ (_Bool)isSupported:(int)arg1;
+ (id)displayName;
+ (id)identifier;
@property(nonatomic, getter=isFlashlightOn) _Bool flashlightOn; // @synthesize flashlightOn=_flashlightOn;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_featureLockStateDidChangeNotification:(id)arg1;
- (void)_deviceBlockStateDidChangeNotification:(id)arg1;
- (id)buttonActions;
- (id)glyphImageForState:(int)arg1 section:(int)arg2;
- (id)_imageNameForState:(int)arg1 section:(int)arg2;
- (id)_shortcutImageNameForState:(int)arg1;
- (id)_settingImageNameForState:(int)arg1;
- (void)_updateFlashlightPowerState;
- (void)_updateState;
- (void)_setTorchLevel:(float)arg1;
- (_Bool)_enableTorch:(_Bool)arg1;
- (_Bool)_toggleState;
- (int)orbBehavior;
- (void)cooldown;
- (void)warmup;
- (void)deactivate;
- (void)_tearDown;
- (void)activate;
- (id)unavailableText;
- (id)statusUpdate;
- (id)aggdKey;
- (id)displayName;
- (void)dealloc;

@end

