//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SBStatusBarStyleOverridesAssertionServer-Protocol.h"

@class FBWorkspaceEventQueue, NSMapTable, NSMutableArray, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBStatusBarStyleOverridesAssertionServer>
{
    NSMutableArray *_runningUpdateTransactions;
    int _statusBarStyleOverrides;
    int _exclusiveStatusBarStyleOverrides;
    NSXPCListener *_xpcListener;
    NSMapTable *_assertionsByIdentifierByClientConnection;
    NSMapTable *_assertionsByStyleOverride;
    NSObject<OS_dispatch_queue> *_internalQueue;
    FBWorkspaceEventQueue *_eventQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FBWorkspaceEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(nonatomic) int exclusiveStatusBarStyleOverrides; // @synthesize exclusiveStatusBarStyleOverrides=_exclusiveStatusBarStyleOverrides;
@property(nonatomic) int statusBarStyleOverrides; // @synthesize statusBarStyleOverrides=_statusBarStyleOverrides;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMapTable *assertionsByStyleOverride; // @synthesize assertionsByStyleOverride=_assertionsByStyleOverride;
@property(retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection; // @synthesize assertionsByIdentifierByClientConnection=_assertionsByIdentifierByClientConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void).cxx_destruct;
- (void)_postStatusStringsByStyle:(id)arg1;
- (id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)arg1 inactiveAssertionsByStyleOverride:(id)arg2;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(int)arg1 removedStyleOverrides:(int)arg2;
- (void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (int)_internalQueue_removeAssertionByStyleOverrides:(id)arg1;
- (int)_internalQueue_addAssertionByStyleOverrides:(id)arg1;
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplications:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)updateForegroundApplications:(id)arg1 withOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateStatusBarStyleOverridesAssertions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
