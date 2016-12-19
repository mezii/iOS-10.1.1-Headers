//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBPowerDownViewDelegate-Protocol.h"

@class SBAlertView;
@protocol SBPowerDownControllerDelegate, SBPowerDownViewInterface;

@interface SBPowerDownController : SBAlert <SBPowerDownViewDelegate>
{
    id _delegate;
    SBAlertView<SBPowerDownViewInterface> *_powerDownView;
    CDUnknownBlockType _orderOutCompletion;
    unsigned long long _aggdStartTime;
}

@property(nonatomic) __weak id <SBPowerDownControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType orderOutCompletion; // @synthesize orderOutCompletion=_orderOutCompletion;
- (void).cxx_destruct;
- (void)_endTimeTrackingAndReportWithKey:(id)arg1;
- (void)_beginTimeTracking;
- (void)_incrementCountForKey:(id)arg1;
- (void)_lockedOnTop;
- (void)_restoreIconListIfNecessary;
- (void)powerDownView:(id)arg1 incrementValueForAggdKey:(id)arg2;
- (void)powerDownViewAnimateOutCompleted:(id)arg1;
- (void)powerDownViewRequestPowerDown:(id)arg1;
- (void)powerDownViewRequestCancel:(id)arg1;
- (double)longPressDurationForHomeButton;
- (double)autoLockTime;
- (void)activate;
- (_Bool)showsSpringBoardStatusBar;
- (_Bool)managesOwnStatusBarAtActivation;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)displayWillDisappear;
- (void)displayWillAppear;
- (_Bool)hasTranslucentBackground;
- (void)cancel;
- (void)powerDown;
- (void)orderOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)orderFront;
- (void)dealloc;
- (id)init;

@end
