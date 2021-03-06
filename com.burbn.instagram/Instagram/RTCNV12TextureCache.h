//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RTCNV12TextureCache : NSObject
{
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_yTextureRef;
    struct __CVBuffer *_uvTextureRef;
}

- (void)dealloc;
- (void)releaseTextures;
- (_Bool)uploadFrameToTextures:(id)arg1;
- (_Bool)loadTexture:(struct __CVBuffer **)arg1 pixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(int)arg3 pixelFormat:(unsigned int)arg4;
- (id)initWithContext:(id)arg1;
@property(readonly, nonatomic) unsigned int uvTexture;
@property(readonly, nonatomic) unsigned int yTexture;

@end

