//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOpenGLFilter.h"

#import "FBFilterCroppingWithTransform.h"
#import "NSCopying.h"

@class NSString;

@interface FBImageFilter : FBOpenGLFilter <NSCopying, FBFilterCroppingWithTransform>
{
    _Bool _needsConfigure;
    union _GLKMatrix4 _croppingContentTransform;
    union _GLKMatrix4 _croppingTextureTransform;
    _Bool _croppingDisabled;
    _Bool _flip;
    double _strength;
    NSString *_fullFragmentShader;
    NSString *_fullVertexShader;
    union _GLKMatrix4 _contentTransform;
    union _GLKMatrix4 _textureTransform;
}

+ (id)basicVertexShader;
+ (id)identityFragmentShader;
@property(nonatomic) _Bool flip; // @synthesize flip=_flip;
@property(copy, nonatomic) NSString *fullVertexShader; // @synthesize fullVertexShader=_fullVertexShader;
@property(copy, nonatomic) NSString *fullFragmentShader; // @synthesize fullFragmentShader=_fullFragmentShader;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(nonatomic) _Bool croppingDisabled; // @synthesize croppingDisabled=_croppingDisabled;
@property(nonatomic) union _GLKMatrix4 textureTransform; // @synthesize textureTransform=_textureTransform;
@property(nonatomic) union _GLKMatrix4 contentTransform; // @synthesize contentTransform=_contentTransform;
- (void).cxx_destruct;
- (_Bool)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(CDStruct_1b6d18a9)arg4;
- (void)configureProgram:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setCroppingTextureTransform:(union _GLKMatrix4)arg1;
- (void)setCroppingContentTransform:(union _GLKMatrix4)arg1;
- (void)addTextureTransform:(union _GLKMatrix4)arg1;
- (void)addContentTransform:(union _GLKMatrix4)arg1;
- (id)vertexShader;
- (id)fragmentShader;
- (id)fragmentShaderPrecision;
- (id)generateFullVertexShader;
- (id)generateFullFragmentShader;
- (unsigned long long)outputPixelFormat;
- (unsigned long long)inputPixelFormat;
- (void)finalizeRendering;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
