//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSurfaceInputType.h"

@class EAGLContext, NSString;

@interface IGSurface : NSObject <IGSurfaceInputType>
{
    unsigned int _texture;
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    unsigned int _internalFormat;
    unsigned int _format;
    unsigned long long _planeIndex;
    _Bool _generatedTexture;
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_cvTexture;
    EAGLContext *_glContext;
    struct CAEAGLLayer *_layer;
    shared_ptr_b95409fc _iglTexture;
    struct CGSize _size;
    _Bool _layerRenderBufferStorageNeedsRefresh;
    unsigned char _flipped;
    unsigned int _textureTarget;
    struct __CVBuffer *_pixelBuffer;
}

@property(nonatomic) shared_ptr_b95409fc iglTexture; // @synthesize iglTexture=_iglTexture;
@property(readonly, nonatomic) unsigned int textureTarget; // @synthesize textureTarget=_textureTarget;
@property(readonly, nonatomic, getter=isFlipped) unsigned char flipped; // @synthesize flipped=_flipped;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)present;
@property(readonly, nonatomic) unsigned int renderbuffer;
@property(readonly, nonatomic) unsigned int framebuffer;
@property(readonly, nonatomic) unsigned int texture;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) _Bool isConsumable;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)initWithIGLTexture:(shared_ptr_b95409fc)arg1;
- (id)initWithLayer:(struct CAEAGLLayer *)arg1;
- (id)initWithFramebuffer:(unsigned int)arg1 size:(struct CGSize)arg2;
- (id)initWithIGTexture:(id)arg1;
- (id)initWithTexture:(unsigned int)arg1 target:(unsigned int)arg2 size:(struct CGSize)arg3;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 textureInternalFormat:(int)arg2 textureFormat:(unsigned int)arg3 planeIndex:(unsigned long long)arg4;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

