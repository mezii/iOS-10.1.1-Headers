//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NavigationDestination, TiltedTabItem, TiltedTabView, UIImage, UIView, WBSCloudTab, WBSCloudTabDevice;

@protocol TiltedTabViewDelegate <NSObject>
- (void)tiltedTabView:(TiltedTabView *)arg1 closeCloudTab:(WBSCloudTab *)arg2 onDevice:(WBSCloudTabDevice *)arg3;
- (void)tiltedTabView:(TiltedTabView *)arg1 didSelectNavigationDestination:(NavigationDestination *)arg2;
- (UIImage *)snapshotForTiltedTabView:(TiltedTabView *)arg1 item:(TiltedTabItem *)arg2;
- (UIImage *)blankSnapshotForTiltedTabView:(TiltedTabView *)arg1;
- (_Bool)tiltedTabView:(TiltedTabView *)arg1 itemHasValidSnapshot:(TiltedTabItem *)arg2;
- (double)tiltedTabView:(TiltedTabView *)arg1 headerHeightForItem:(TiltedTabItem *)arg2;
- (UIView *)expectedSuperviewForTiltedTabView:(TiltedTabView *)arg1;
- (void)tiltedTabView:(TiltedTabView *)arg1 relinquishContentView:(UIView *)arg2 forItem:(TiltedTabItem *)arg3;
- (void)tiltedTabView:(TiltedTabView *)arg1 animateTopBackdropView:(UIView *)arg2 hidden:(_Bool)arg3;
- (UIView *)tiltedTabView:(TiltedTabView *)arg1 borrowContentViewForItem:(TiltedTabItem *)arg2 withTopBackdropView:(id *)arg3 ofHeight:(double)arg4;
- (void)tiltedTabViewDidUpdateItemVisibilityOrder:(TiltedTabView *)arg1;
- (void)tiltedTabView:(TiltedTabView *)arg1 didMoveItem:(TiltedTabItem *)arg2 overItem:(TiltedTabItem *)arg3;
- (void)tiltedTabView:(TiltedTabView *)arg1 closeItem:(TiltedTabItem *)arg2;
- (_Bool)tiltedTabView:(TiltedTabView *)arg1 canCloseItem:(TiltedTabItem *)arg2;
- (void)tiltedTabView:(TiltedTabView *)arg1 didSelectItem:(TiltedTabItem *)arg2;
- (TiltedTabItem *)currentItemForTiltedTabView:(TiltedTabView *)arg1;
- (void)tiltedTabViewDidDismiss:(TiltedTabView *)arg1;
- (void)tiltedTabViewWillDismiss:(TiltedTabView *)arg1;
- (void)tiltedTabViewDidPresent:(TiltedTabView *)arg1;
- (void)tiltedTabViewWillPresent:(TiltedTabView *)arg1;
@end

