//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (SBGraphics)
- (struct CGImage *)_newThumbnailWithJPEG:(id)arg1 forMaxPixelDimension:(double)arg2;
- (struct CGImage *)_newThumbnailWithImageSource:(struct CGImageSource *)arg1 forMaxPixelDimension:(double)arg2;
- (id)_thumbnailFitToSize:(struct CGSize)arg1;
- (struct CGImageSource *)_newSource;
- (id)sbg_squareImage;
- (id)sbg_thumbnailFitToSize:(struct CGSize)arg1;
- (_Bool)isAnimated;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (_Bool)sbs_hasAlpha;
@end
