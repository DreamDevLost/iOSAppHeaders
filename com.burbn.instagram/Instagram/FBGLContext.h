//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, FBCCPixelBufferPoolCache, NSMutableArray, NSMutableSet;

@interface FBGLContext : NSObject
{
    struct __CVOpenGLESTextureCache *_textureCache;
    unsigned int _squareVertexBuffer;
    NSMutableArray *_resources;
    NSMutableSet *_cachedSurfaces;
    struct recursive_mutex _lock;
    _Bool _supportsTextureRGExtension;
    EAGLContext *_systemGLContext;
    FBCCPixelBufferPoolCache *_pixelBufferPoolCache;
    shared_ptr_7d4d5427 _gpuTimer;
    struct CGSize _maxTextureSize;
}

+ (struct CGSize)allowedSizeMatchingAspectRatioOfSize:(struct CGSize)arg1;
+ (id)currentContext;
+ (id)newWithSystemGLContext:(id)arg1;
+ (id)newConcurrentContext;
+ (id)newConcurrentContextWithSharedContext:(id)arg1;
+ (id)new;
+ (id)newWithSharedContext:(id)arg1;
@property(readonly, nonatomic) struct CGSize maxTextureSize; // @synthesize maxTextureSize=_maxTextureSize;
@property(readonly, nonatomic) _Bool supportsTextureRGExtension; // @synthesize supportsTextureRGExtension=_supportsTextureRGExtension;
@property(nonatomic) shared_ptr_7d4d5427 gpuTimer; // @synthesize gpuTimer=_gpuTimer;
@property(readonly, nonatomic) FBCCPixelBufferPoolCache *pixelBufferPoolCache; // @synthesize pixelBufferPoolCache=_pixelBufferPoolCache;
@property(readonly, nonatomic) EAGLContext *systemGLContext; // @synthesize systemGLContext=_systemGLContext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeAllReusableSurfaces;
- (id)popReusableSurfaceWithSize:(struct CGSize)arg1;
- (void)pushReusableSurface:(id)arg1;
- (struct CGSize)allowedSizeMatchingAspectRatioOfSize:(struct CGSize)arg1;
@property(readonly, nonatomic) unsigned int squareVertexBuffer;
- (void)flush;
- (void)removeAllResourcesForFilter:(id)arg1;
- (id)resourceForFilter:(id)arg1;
- (void)setResource:(id)arg1 forFilter:(id)arg2;
@property(readonly, nonatomic) unsigned long long renderingAPI;
@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *textureCache;
- (void)makeCurrent;
- (id)initWithConcurrentBindingAllowed:(_Bool)arg1 systemGLContext:(id)arg2;
- (id)initWithConcurrentBindingAllowed:(_Bool)arg1 sharedContext:(id)arg2;
- (void)dealloc;

@end

