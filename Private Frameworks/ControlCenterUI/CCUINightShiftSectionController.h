//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUIControlCenterSectionViewController.h>

#import <ControlCenterUI/CCUIControlCenterButtonDelegate-Protocol.h>

@class CBBlueLightClient, NSString, UIAlertController;

@interface CCUINightShiftSectionController : CCUIControlCenterSectionViewController <CCUIControlCenterButtonDelegate>
{
    CBBlueLightClient *_blueLightReductionClient;
    CDStruct_0b0a24e2 _currentStatus;
    UIAlertController *_presentedAlertController;
}

+ (id)_defaultFontTight;
+ (id)_identifier;
+ (id)_displayName;
+ (Class)viewClass;
- (void).cxx_destruct;
- (_Bool)isInternal;
- (void)buttonTapped:(id)arg1;
- (id)_timeFormatterForLocale:(id)arg1;
- (_Bool)_uses24HourTimeForLocale:(id)arg1;
- (id)_formatCardinalityForTransitionTime:(CDStruct_bdf7039f)arg1 forLocale:(id)arg2;
- (id)_statusUpdateFormatStringForBlueLightEnabled:(_Bool)arg1 transitionTime:(CDStruct_bdf7039f)arg2 forLocale:(id)arg3;
- (id)_statusUpdateFormatStringForBlueLightEnabled:(_Bool)arg1 transitionTime:(CDStruct_bdf7039f)arg2;
- (id)_timeStringForBlueLightTransitionTime:(CDStruct_bdf7039f)arg1 forLocale:(id)arg2;
- (id)_timeStringForBlueLightTransitionTime:(CDStruct_bdf7039f)arg1;
- (id)_statusUpdateForBlueLightStatus:(CDStruct_0b0a24e2)arg1 forLocale:(id)arg2;
- (id)_statusUpdateForBlueLightStatus:(CDStruct_0b0a24e2)arg1;
- (id)_alertControllerForDisablingAccessibilityScreenFilter:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;
- (void)_setNightShiftEnabled:(_Bool)arg1;
- (void)_getBlueLightStatus:(CDUnknownBlockType)arg1;
- (void)_updateLayoutForSizeCategoryChange;
- (_Bool)_toggleState;
- (void)_updateState;
- (id)_aggdKey;
- (_Bool)dismissModalFullScreenIfNeeded;
- (id)statusUpdate;
- (void)_buttonTapped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)sectionIdentifier;
- (_Bool)enabled;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

