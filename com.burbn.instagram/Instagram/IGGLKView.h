//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, IGGLKCanvas, IGGLKColorRenderbuffer;

@interface IGGLKView : UIView
{
    IGGLKColorRenderbuffer *_colorRenderbuffer;
    struct CGSize _renderbufferSize;
    _Bool _needsDisplay;
    _Bool _canRender;
    CADisplayLink *_displayLink;
    struct __CFRunLoopObserver *_runLoopObserver;
    IGGLKCanvas *_canvas;
}

+ (Class)layerClass;
@property(retain, nonatomic) IGGLKCanvas *canvas; // @synthesize canvas=_canvas;
- (void).cxx_destruct;
- (void)_render;
- (void)_renderIfPossible;
- (void)_handleDisplayLink:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setNeedsDisplay;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

