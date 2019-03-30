//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGImageFilter.h>

@class IGSurface;

@interface IGImageOverlayFilter : IGImageFilter
{
    IGSurface *_overlay;
    _Bool _ignoreTextureTransform;
}

@property(nonatomic) _Bool ignoreTextureTransform; // @synthesize ignoreTextureTransform=_ignoreTextureTransform;
- (void).cxx_destruct;
- (void)setTextureTransform:(union _GLKMatrix4)arg1;
- (void)configureProgram:(id)arg1;
- (id)fragmentShader;
- (id)samplers;
@property(nonatomic) struct __CVBuffer *overlay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithImage:(id)arg1;

@end
