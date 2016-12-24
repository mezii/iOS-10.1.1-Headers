//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface CCUIBackgroundDarkeningWithPlatterCutoutView : UIView
{
    UIImageView *_imageView;
    UIView *_above;
    UIView *_below;
    UIView *_left;
    UIView *_right;
    UIColor *_darkeningColor;
    double _platterContinuousCornerRadius;
    struct CGRect _cutOutRect;
}

@property(nonatomic) double platterContinuousCornerRadius; // @synthesize platterContinuousCornerRadius=_platterContinuousCornerRadius;
@property(nonatomic) struct CGRect cutOutRect; // @synthesize cutOutRect=_cutOutRect;
@property(copy, nonatomic) UIColor *darkeningColor; // @synthesize darkeningColor=_darkeningColor;
- (void).cxx_destruct;
- (void)_updateMaskImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 darkeningColor:(id)arg2 platterCornerRadius:(double)arg3;

@end

