//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext;

@interface FBAREngineSurface : NSObject
{
    struct __CVBuffer *_chromaCVTexture;
    struct __CVBuffer *_lumaCVTexture;
    struct __CVBuffer *_rgbaCVTexture;
    unsigned int _pixelFormatType;
    EAGLContext *_glContext;
    struct __CVOpenGLESTextureCache *_textureCache;
    unsigned int _chromaTexture;
    unsigned int _chromaTextureTarget;
    unsigned int _lumaTexture;
    unsigned int _lumaTextureTarget;
    unsigned int _rgbaTexture;
    unsigned int _rgbaTextureTarget;
    struct __CVBuffer *_pixelBuffer;
    unsigned long long _bytesPerRow;
    struct CGSize _size;
}

@property(readonly, nonatomic) unsigned int rgbaTextureTarget; // @synthesize rgbaTextureTarget=_rgbaTextureTarget;
@property(readonly, nonatomic) unsigned int rgbaTexture; // @synthesize rgbaTexture=_rgbaTexture;
@property(readonly, nonatomic) unsigned int lumaTextureTarget; // @synthesize lumaTextureTarget=_lumaTextureTarget;
@property(readonly, nonatomic) unsigned int lumaTexture; // @synthesize lumaTexture=_lumaTexture;
@property(readonly, nonatomic) unsigned int chromaTextureTarget; // @synthesize chromaTextureTarget=_chromaTextureTarget;
@property(readonly, nonatomic) unsigned int chromaTexture; // @synthesize chromaTexture=_chromaTexture;
@property(readonly, nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void).cxx_destruct;
- (void)bindTextures;
@property(readonly, nonatomic) _Bool isRGBATexture;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 textureCache:(struct __CVOpenGLESTextureCache *)arg2;

@end
