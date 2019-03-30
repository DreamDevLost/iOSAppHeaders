//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryAssetManagerOverlay.h"

@class NSArray, NSString;

@interface IGCameraOverlaysGeneratedOutput : NSObject <IGStoryAssetManagerOverlay>
{
    NSArray *_overlayViews;
    NSArray *_transparentOverlayGradient;
    double _overlayGradientAlpha;
    long long _gradientDirection;
}

@property(readonly, nonatomic) long long gradientDirection; // @synthesize gradientDirection=_gradientDirection;
@property(readonly, nonatomic) double overlayGradientAlpha; // @synthesize overlayGradientAlpha=_overlayGradientAlpha;
@property(readonly, nonatomic) NSArray *transparentOverlayGradient; // @synthesize transparentOverlayGradient=_transparentOverlayGradient;
@property(readonly, copy, nonatomic) NSArray *overlayViews; // @synthesize overlayViews=_overlayViews;
- (void).cxx_destruct;
- (id)initWithPrepcaptureOverlays:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
