//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBIconIndexNode-Protocol.h"
#import "SBTreeNode-Protocol.h"

@class NSArray, NSHashTable, NSString, UIImage;
@protocol SBTreeNode;

@interface SBIcon : NSObject <SBTreeNode, SBIconIndexNode>
{
    NSHashTable *_observers;
    id _badgeNumberOrString;
    unsigned int _uninstalled:1;
    UIImage *_cachedIconImages[17];
    id <SBTreeNode> _parentNode;
}

+ (id)memoryMappedIconImageOfSize:(struct CGSize)arg1 scale:(double)arg2 withDrawing:(CDUnknownBlockType)arg3;
+ (id)memoryMappedIconImageForIconImage:(id)arg1;
+ (id)_iconImageOfSize:(struct CGSize)arg1 scale:(double)arg2 failGracefully:(_Bool)arg3 drawing:(CDUnknownBlockType)arg4;
+ (id)_iconImagesMemoryPool;
- (void).cxx_destruct;
- (void)userTouchBegan;
- (_Bool)canReceiveGrabbedIcon;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertBodyForAppWithDocumentsOrDataInCloud;
- (id)uninstallAlertBodyNotAllowed;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitleNotAllowed;
- (id)uninstallAlertTitle;
- (_Bool)isUninstalled;
- (void)setUninstalled;
- (void)completeUninstall;
- (_Bool)isUninstallSupported;
- (_Bool)shouldAnimateProgress;
- (_Bool)progressIsPaused;
- (double)progressPercent;
- (long long)progressState;
- (void)launchFromLocation:(int)arg1 context:(id)arg2;
- (id)automationID;
- (_Bool)isBeta;
- (_Bool)isRecentlyUpdated;
- (void)setBadge:(id)arg1;
- (void)noteBadgeDidChange;
- (int)accessoryTypeForLocation:(int)arg1;
- (id)accessoryTextForLocation:(int)arg1;
- (id)badgeNumberOrString;
- (long long)badgeValue;
- (void)reloadIconImagePurgingImageCache:(_Bool)arg1;
- (void)reloadIconImage;
- (void)purgeCachedImages;
- (id)gridCellImage;
- (id)getGenericIconImage:(int)arg1;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)getCachedIconImage:(int)arg1;
- (id)getIconImage:(int)arg1;
- (id)getStandardIconImageForLocation:(int)arg1;
- (_Bool)shouldCacheImageForFormat:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (_Bool)launchEnabled;
- (id)tags;
- (_Bool)matchesEntity:(id)arg1;
- (long long)localizedCompareDisplayNames:(id)arg1;
- (_Bool)canTightenLabel;
- (_Bool)canEllipsizeLabel;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)displayNameForLocation:(int)arg1;
- (void)localeChanged;
- (void)dealloc;
- (id)init;
- (int)iconFormatForLocation:(int)arg1;
@property(readonly, nonatomic) _Bool shouldWarmUp;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
@property(nonatomic) __weak id <SBTreeNode> parent;
@property(readonly, nonatomic) NSArray *children;
- (_Bool)hasObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)application;
- (_Bool)isApplicationIcon;
- (_Bool)isBookmarkIcon;
- (id)appPlaceholder;
- (_Bool)isDownloadingIcon;
- (_Bool)hasFolderIconView;
- (id)folder;
- (_Bool)isFolderIcon;
- (id)applicationBundleID;
- (id)leafIdentifier;
- (_Bool)isLeafIcon;
- (Class)iconImageViewClassForLocation:(int)arg1;
- (void)_notifyLaunchEnabledDidChange;
- (void)_notifyAccessoriesDidUpdate;
- (void)_notifyImageDidUpdate;
- (_Bool)isEmptyPlaceholder;
- (_Bool)isGrabbedIconPlaceholder;
- (_Bool)isPlaceholder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
