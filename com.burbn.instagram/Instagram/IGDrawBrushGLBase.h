//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDrawBrushGLAbstract.h"

@class IGContext, IGGLProgram;

@interface IGDrawBrushGLBase : IGDrawBrushGLAbstract
{
    unsigned int _uMVP;
    IGGLProgram *_program;
    IGContext *_context;
}

+ (id)texturedFragment;
+ (id)pointVertexSourceText;
- (id)context;
- (id)program;
- (void).cxx_destruct;
- (id)createMark;
- (void)prepareToDraw;
- (void)setSampler:(id)arg1 forTexture:(id)arg2;
- (void)_setSampler:(id)arg1 forData:(id)arg2 withOptions:(id)arg3;
- (void)setMonochromeSampler:(id)arg1 forData:(id)arg2;
- (void)setSampler:(id)arg1 forData:(id)arg2;
- (void)_setSampler:(id)arg1 forTexture:(id)arg2 withOptions:(id)arg3;
- (void)setMonochromeSampler:(id)arg1 forTextureName:(id)arg2;
- (void)setSampler:(id)arg1 forTextureName:(id)arg2;
- (void)setSampler:(id)arg1 forUIImage:(id)arg2;
- (id)_preumultiplyOptionIfNeeded;
- (id)initWithContext:(id)arg1 vertexProgram:(id)arg2 fragmentProgram:(id)arg3;

@end
