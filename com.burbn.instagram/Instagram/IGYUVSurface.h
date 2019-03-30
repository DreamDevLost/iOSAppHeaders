//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSurfaceInputType.h"

@class IGSurface, NSString;

@interface IGYUVSurface : NSObject <IGSurfaceInputType>
{
    struct __CVBuffer *_pixelBuffer;
    IGSurface *_lumaSurface;
    IGSurface *_chromaSurface;
}

@property(retain, nonatomic) IGSurface *chromaSurface; // @synthesize chromaSurface=_chromaSurface;
@property(retain, nonatomic) IGSurface *lumaSurface; // @synthesize lumaSurface=_lumaSurface;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFlipped) unsigned char flipped;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) _Bool isConsumable;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
