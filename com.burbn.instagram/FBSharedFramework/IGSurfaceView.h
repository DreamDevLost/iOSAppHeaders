//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAEAGLLayer, IGRenderer, IGSurface;

@interface IGSurfaceView : UIView
{
    IGSurface *_surface;
    IGRenderer *_renderer;
}

+ (Class)layerClass;
@property(readonly, nonatomic) IGSurface *surface; // @synthesize surface=_surface;
@property(retain, nonatomic) IGRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) CAEAGLLayer *eaglLayer;

@end

