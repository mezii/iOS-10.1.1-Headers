//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class CCUIButtonModule;

@interface CCUIButtonModuleUnavailableAlertItem : SBAlertItem
{
    CCUIButtonModule *_module;
}

+ (_Bool)presentAlertItemForButtonModule:(id)arg1;
@property(retain, nonatomic) CCUIButtonModule *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (_Bool)supportsAlertController;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;

@end

