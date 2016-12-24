//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUIControlCenterSectionView.h>

@class CCUIControlCenterPushButton;

@interface CCUIButtonLikeSectionSplitView : CCUIControlCenterSectionView
{
    double _separatorWidth;
    unsigned long long _mode;
    CCUIControlCenterPushButton *_leftSection;
    CCUIControlCenterPushButton *_rightSection;
}

@property(retain, nonatomic) CCUIControlCenterPushButton *rightSection; // @synthesize rightSection=_rightSection;
@property(retain, nonatomic) CCUIControlCenterPushButton *leftSection; // @synthesize leftSection=_leftSection;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)_frameForSectionSlot:(int)arg1;
- (struct UIEdgeInsets)_landscapeInsetsForSection;
- (id)_viewForSectionSlot:(int)arg1;
- (void)_updateButtonsCorners;
- (void)_updateLabelParameters;
- (void)_relayout;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

