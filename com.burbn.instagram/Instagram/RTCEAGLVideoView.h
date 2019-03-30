//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLKViewDelegate.h"
#import "RTCVideoRenderer.h"

@class EAGLContext, GLKView, NSString, RTCDisplayLinkTimer, RTCI420TextureCache, RTCNV12TextureCache, RTCVideoFrame;

@interface RTCEAGLVideoView : UIView <GLKViewDelegate, RTCVideoRenderer>
{
    RTCDisplayLinkTimer *_timer;
    EAGLContext *_glContext;
    _Bool _isDirty;
    id <RTCVideoViewShading> _shader;
    RTCNV12TextureCache *_nv12TextureCache;
    RTCI420TextureCache *_i420TextureCache;
    long long _lastDrawnFrameTimeStampNs;
    id <RTCVideoViewDelegate> _delegate;
    RTCVideoFrame *_videoFrame;
    GLKView *_glkView;
}

@property(readonly, nonatomic) GLKView *glkView; // @synthesize glkView=_glkView;
@property(retain) RTCVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(nonatomic) __weak id <RTCVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ensureGLContext;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)teardownGL;
- (void)setupGL;
- (void)displayLinkTimerDidFire;
- (void)renderFrame:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)dealloc;
- (_Bool)configure;
- (id)initWithCoder:(id)arg1 shader:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 shader:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

