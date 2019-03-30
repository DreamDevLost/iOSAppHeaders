//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RTCMTLRenderer.h"

@interface RTCMTLRGBRenderer : RTCMTLRenderer
{
    struct __CVMetalTextureCache *_textureCache;
    id <MTLTexture> _texture;
    id <MTLBuffer> _uniformsBuffer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)uploadTexturesToRenderEncoder:(id)arg1;
- (_Bool)setupTexturesForFrame:(id)arg1;
- (void)getWidth:(int *)arg1 height:(int *)arg2 cropWidth:(int *)arg3 cropHeight:(int *)arg4 cropX:(int *)arg5 cropY:(int *)arg6 ofFrame:(id)arg7;
- (id)shaderSource;
- (_Bool)initializeTextureCache;
- (_Bool)addRenderingDestination:(id)arg1;

@end

