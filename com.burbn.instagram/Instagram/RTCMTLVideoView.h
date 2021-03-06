//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MTKViewDelegate.h"
#import "RTCVideoRenderer.h"

@class MTKView, NSString, NSValue, RTCMTLI420Renderer, RTCMTLNV12Renderer, RTCMTLRGBRenderer, RTCVideoFrame;

@interface RTCMTLVideoView : UIView <MTKViewDelegate, RTCVideoRenderer>
{
    id <RTCVideoViewDelegate> _delegate;
    RTCMTLI420Renderer *_rendererI420;
    RTCMTLNV12Renderer *_rendererNV12;
    RTCMTLRGBRenderer *_rendererRGB;
    MTKView *_metalView;
    RTCVideoFrame *_videoFrame;
    long long _lastFrameTimeNs;
    NSValue *_rotationOverride;
    struct CGSize _videoFrameSize;
}

+ (id)createRGBRenderer;
+ (id)createI420Renderer;
+ (id)createNV12Renderer;
+ (id)createMetalView:(struct CGRect)arg1;
+ (_Bool)isMetalAvailable;
@property(retain, nonatomic) NSValue *rotationOverride; // @synthesize rotationOverride=_rotationOverride;
@property(nonatomic) long long lastFrameTimeNs; // @synthesize lastFrameTimeNs=_lastFrameTimeNs;
@property(nonatomic) struct CGSize videoFrameSize; // @synthesize videoFrameSize=_videoFrameSize;
@property(retain) RTCVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(retain, nonatomic) RTCMTLRGBRenderer *rendererRGB; // @synthesize rendererRGB=_rendererRGB;
@property(retain, nonatomic) RTCMTLNV12Renderer *rendererNV12; // @synthesize rendererNV12=_rendererNV12;
@property(retain, nonatomic) RTCMTLI420Renderer *rendererI420; // @synthesize rendererI420=_rendererI420;
@property(nonatomic) __weak id <RTCVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)renderFrame:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)drawableSize;
- (long long)frameRotation;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (void)layoutSubviews;
- (void)configure;
@property(nonatomic) long long videoContentMode;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

