//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUIControlCenterSectionView.h>

#import <ControlCenterUI/CCUIButtonStackLayoutDelegate-Protocol.h>
#import <ControlCenterUI/UIScrollViewDelegate-Protocol.h>

@class CCUIImmediateTouchScrollView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIStackView;
@protocol CCUIButtonStackPagingViewDelegate;

@interface CCUIButtonStackPagingView : CCUIControlCenterSectionView <CCUIButtonStackLayoutDelegate, UIScrollViewDelegate>
{
    NSMutableArray *_buttons;
    CCUIImmediateTouchScrollView *_scrollView;
    UIStackView *_pagesStackView;
    unsigned long long _buttonStretchThreshold;
    NSLayoutConstraint *_topMargin;
    NSLayoutConstraint *_bottomMargin;
    NSLayoutConstraint *_leadingMargin;
    NSLayoutConstraint *_trailingMargin;
    unsigned long long _maxButtonsPerPage;
    long long _axis;
    double _interButtonPadding;
    id <CCUIButtonStackPagingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CCUIButtonStackPagingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double interButtonPadding; // @synthesize interButtonPadding=_interButtonPadding;
@property(nonatomic) unsigned long long buttonStretchThreshold; // @synthesize buttonStretchThreshold=_buttonStretchThreshold;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(nonatomic) unsigned long long maxButtonsPerPage; // @synthesize maxButtonsPerPage=_maxButtonsPerPage;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)buttonStack:(id)arg1 didLayoutWithSpacing:(double)arg2;
- (void)_applyConfigurationToButtonStacks;
- (void)_organizeButtonsInPages;
- (void)resortButtons;
- (id)_internalButtons;
- (id)_primaryButtons;
@property(copy, nonatomic) NSArray *buttons;
- (void)removeButton:(id)arg1;
- (void)addButton:(id)arg1;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @dynamic marginInsets;
@property(nonatomic) long long pagingAxis; // @dynamic pagingAxis;
- (void)scrollToPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

