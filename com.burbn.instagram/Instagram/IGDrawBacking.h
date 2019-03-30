//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGContext, IGGLBlendMode, IGGLProgram, IGSurface;

@interface IGDrawBacking : NSObject
{
    id <IGVertexArrayObject> _vao;
    IGContext *_igContext;
    IGSurface *_igSurface;
    _Bool _hasSomethingToDraw;
    IGGLProgram *_program;
    IGGLProgram *_unpremultiplyProgram;
    IGContext *_context;
    id _advisoryOwner;
    IGGLBlendMode *_blendMode;
    union _GLKVector4 _color;
    union _GLKMatrix4 _projection;
    union _GLKMatrix4 _modelView;
}

+ (id)_vertex;
+ (id)_unpremultiply;
+ (id)_fragment;
@property(nonatomic) __weak IGGLBlendMode *blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) __weak id advisoryOwner; // @synthesize advisoryOwner=_advisoryOwner;
@property(readonly, nonatomic) __weak IGContext *context; // @synthesize context=_context;
@property(readonly, retain, nonatomic) IGGLProgram *unpremultiplyProgram; // @synthesize unpremultiplyProgram=_unpremultiplyProgram;
@property(readonly, retain, nonatomic) IGGLProgram *program; // @synthesize program=_program;
@property(nonatomic) union _GLKMatrix4 modelView; // @synthesize modelView=_modelView;
@property(nonatomic) union _GLKMatrix4 projection; // @synthesize projection=_projection;
@property(nonatomic) union _GLKVector4 color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)clear;
- (void)drawToUnpremultiplied;
- (void)draw;
- (void)copyToOutput;
- (void)doneTargeting;
- (void)targetForDrawing;
- (id)initWithContext:(id)arg1 size:(struct CGSize)arg2;

@end

