//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUIControlCenterPageContentProviding-Protocol.h>
#import <ControlCenterUI/CCUIControlCenterSectionViewControllerDelegate-Protocol.h>
#import <ControlCenterUI/CCUIControlCenterStatusViewDelegate-Protocol.h>
#import <ControlCenterUI/CCUIFirstUsePanelViewControllerDelegate-Protocol.h>

@class CCUIAirStuffSectionController, CCUIBrightnessSectionController, CCUIControlCenterStatusView, CCUIFirstUsePanelViewController, CCUINightShiftSectionController, CCUIQuickLaunchSectionController, CCUISettingsSectionController, NSLayoutConstraint, NSMutableArray, NSString, UIStackView, UIView;
@protocol CCUIControlCenterPageContentViewControllerDelegate;

@interface CCUISystemControlsPageViewController : UIViewController <CCUIControlCenterSectionViewControllerDelegate, CCUIControlCenterStatusViewDelegate, CCUIFirstUsePanelViewControllerDelegate, CCUIControlCenterPageContentProviding>
{
    NSMutableArray *_sectionList;
    UIStackView *_horizontalStackView;
    NSMutableArray *_columnStackViews;
    CCUIFirstUsePanelViewController *_firstUseViewController;
    UIView *_firstUseView;
    NSLayoutConstraint *_topMargin;
    NSLayoutConstraint *_bottomMargin;
    NSLayoutConstraint *_leadingMargin;
    NSLayoutConstraint *_trailingMargin;
    CCUIControlCenterStatusView *_statusView;
    CCUISettingsSectionController *_settingsSection;
    CCUIBrightnessSectionController *_brightnessSection;
    CCUINightShiftSectionController *_nightShiftSection;
    CCUIAirStuffSectionController *_airStuffSection;
    CCUIAirStuffSectionController *_auxillaryAirStuffSection;
    CCUIQuickLaunchSectionController *_quickLaunchSection;
    id <CCUIControlCenterPageContentViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <CCUIControlCenterPageContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissButtonActionPlatterWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentButtonActionPlatterWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentAirDropWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissAirDropWithCompletion:(CDUnknownBlockType)arg1;
- (void)firstUsePanelWasAcknowledged:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)controlCenterWillFinishTransitionOpen:(_Bool)arg1 withDuration:(double)arg2;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)controlCenterDidScrollToThisPage:(_Bool)arg1;
- (void)endSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (void)beginSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (long long)layoutStyle;
- (id)pageContainerViewController;
- (id)controlCenterSystemAgent;
- (void)section:(id)arg1 publishStatusUpdate:(id)arg2;
- (void)noteSectionEnabledStateDidChange:(id)arg1;
- (void)sectionWantsControlCenterDismissal:(id)arg1;
- (void)_acknowledgeAndDismissFirstUsePanelAnimated:(_Bool)arg1;
- (void)_updateSectionVisibility:(id)arg1 animated:(_Bool)arg2;
- (void)_updateAllSectionVisibilityAnimated:(_Bool)arg1;
- (void)_updateStackViewMarginsAndSpacing;
- (void)_updateSectionViews;
- (void)_updateColumns;
- (id)_createColumnStackView;
- (long long)_currentLayoutStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsVisible;

@end

