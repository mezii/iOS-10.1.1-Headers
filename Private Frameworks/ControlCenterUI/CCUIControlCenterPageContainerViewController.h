//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUIControlCenterObserver-Protocol.h>
#import <ControlCenterUI/CCUIControlCenterPageContentViewControllerDelegate-Protocol.h>
#import <ControlCenterUI/CCUIControlCenterPagePlatterViewDelegate-Protocol.h>

@class NSMutableSet, NSString;
@protocol CCUIControlCenterPageContainerViewControllerDelegate, CCUIControlCenterPageContentProviding;

@interface CCUIControlCenterPageContainerViewController : UIViewController <CCUIControlCenterPageContentViewControllerDelegate, CCUIControlCenterPagePlatterViewDelegate, CCUIControlCenterObserver>
{
    UIViewController<CCUIControlCenterPageContentProviding> *_contentViewController;
    double _revealPercentage;
    NSMutableSet *_punchOutMaskCachingSuppressionReasons;
    id <CCUIControlCenterPageContainerViewControllerDelegate> _delegate;
}

@property(retain, nonatomic) id <CCUIControlCenterPageContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)endSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (void)beginSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (void)visibilityPreferenceChangedForContentViewController:(id)arg1;
- (long long)layoutStyle;
- (id)controlCenterSystemAgent;
- (void)contentViewControllerWantsDismissal:(id)arg1;
@property(readonly, nonatomic) _Bool shouldSuppressPunchOutMaskCaching;
- (void)controlCenterWillFinishTransitionOpen:(_Bool)arg1 withDuration:(double)arg2;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (_Bool)dismissModalFullScreenIfNeeded;
- (id)_platterView;
@property(nonatomic) struct UIEdgeInsets marginInsets;
- (void)viewDidLoad;
- (id)_pagePlatterView;
- (void)loadView;
@property(nonatomic) double revealPercentage;
@property(readonly, nonatomic) UIViewController<CCUIControlCenterPageContentProviding> *contentViewController;
- (id)initWithContentViewController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

