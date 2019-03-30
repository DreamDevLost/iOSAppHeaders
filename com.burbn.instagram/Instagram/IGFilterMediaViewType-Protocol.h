//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCompositionFilterMetadata, IGImageFilter;

@protocol IGFilterMediaViewType <NSObject>
@property(nonatomic) struct IGCompositionFilterTransform mediaTransform;
@property(retain, nonatomic) IGCompositionFilterMetadata *compositionFilterMetadata;
@property(retain, nonatomic) IGImageFilter *overlayImageFilter;
@property(retain, nonatomic) IGImageFilter *imageFilter;
- (void)hideOverlayImageFilter;
- (void)setOverlayImageFilterNeedsRemoval;
- (void)setOverlayImageFilterWidth:(double)arg1 overlayFilterPosition:(long long)arg2;
@end
