//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBMultiplexingViewController.h"

@class SBDashBoardViewControllerBase;

@interface SBDashBoardIsolatingViewController : SBMultiplexingViewController
{
    SBDashBoardViewControllerBase *_isolatedViewController;
}

@property(readonly, nonatomic) SBDashBoardViewControllerBase *isolatedViewController; // @synthesize isolatedViewController=_isolatedViewController;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)presentationControllerDidEndDismissing:(id)arg1;
- (void)presentationControllerWillBeginDismissing:(id)arg1;
- (void)presentationControllerDidEndPresenting:(id)arg1;
- (void)presentationControllerWillBeginPresenting:(id)arg1;
- (_Bool)wantsToShareTouches;
- (id)createViewControllerForIsolation;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPresenter:(id)arg1 isolatedViewController:(id)arg2;

@end

