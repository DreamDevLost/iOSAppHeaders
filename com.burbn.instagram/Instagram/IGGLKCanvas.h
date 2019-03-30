//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGLKBackgroundRenderer, IGGLKNode, IGGLKStencilRenderbuffer, IGGLKTextureRenderer, IGGLKView, NSArray, NSMutableArray, UIColor;

@interface IGGLKCanvas : NSObject
{
    double _red;
    double _green;
    double _blue;
    IGGLKNode *_rootNode;
    IGGLKTextureRenderer *_textureRenderer;
    IGGLKBackgroundRenderer *_backgroundRenderer;
    unsigned int _framebuffer;
    NSMutableArray *_filterChainTextures;
    IGGLKStencilRenderbuffer *_stencilBuffer;
    UIColor *_backgroundColor;
    IGGLKView *_view;
    double _contentsScale;
}

@property(nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
@property(nonatomic) __weak IGGLKView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)_attachTexture:(id)arg1;
- (void)_attachColorRenderbuffer:(id)arg1;
- (void)_attachRenderTargetWithState:(CDStruct_a23588fb *)arg1;
- (id)_nextFilterChainTextureForState:(CDStruct_a23588fb *)arg1;
- (id)_currentFilterChainTextureForState:(CDStruct_a23588fb *)arg1;
- (void)_removeAllFilterChainTextures;
- (void)_removeFilterChainTexture;
- (void)_addFilterChainTexture;
- (void)_renderTexture:(id)arg1;
- (void)_renderBackgroundForNode:(id)arg1 withState:(CDStruct_a23588fb *)arg2;
- (void)_renderNode:(id)arg1 withState:(CDStruct_a23588fb *)arg2;
- (void)_renderWithState:(CDStruct_a23588fb *)arg1;
- (CDStruct_a23588fb)_generateRenderState;
- (void)renderToTexture:(id)arg1;
- (void)renderToColorRenderbuffer:(id)arg1;
- (void)node:(id)arg1 didRemoveChild:(id)arg2;
- (void)node:(id)arg1 didAddChild:(id)arg2;
@property(nonatomic) struct CGSize size;
- (void)setNeedsDisplay;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGPoint)convertTranslation:(struct CGPoint)arg1 withEndPoint:(struct CGPoint)arg2 toNode:(id)arg3;
- (struct CGPoint)convertTranslation:(struct CGPoint)arg1 withEndPoint:(struct CGPoint)arg2 fromNode:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2 toNode:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2 toView:(id)arg3;
- (void)sendChildToBack:(id)arg1;
- (void)bringChildToFront:(id)arg1;
- (void)insertChild:(id)arg1 belowSibling:(id)arg2;
- (void)insertChild:(id)arg1 aboveSibling:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)addChild:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (void)dealloc;
- (id)init;

@end

