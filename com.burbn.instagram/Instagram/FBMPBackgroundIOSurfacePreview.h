//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMPPreviewBase.h"

@class CALayer, NSObject<OS_dispatch_queue>;

@interface FBMPBackgroundIOSurfacePreview : FBMPPreviewBase
{
    CALayer *_renderLayer;
    NSObject<OS_dispatch_queue> *_renderQueue;
}

- (void).cxx_destruct;
- (void)_render:(struct opaqueCMSampleBuffer *)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)render:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
