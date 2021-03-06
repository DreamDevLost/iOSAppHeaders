//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGGLFilter.h>

#import "NSCopying.h"

@class IGSurface, NSString;

@interface IGImageFilter : IGGLFilter <NSCopying>
{
    _Bool _needsConfigure;
    IGSurface *_maskLayer;
    CDUnion_7d78eca3 _contentVertices;
    unsigned int _contentVertexBuffer;
    shared_ptr_3ca5f01e _vb0;
    shared_ptr_3ca5f01e _vb1;
    shared_ptr_3ca5f01e _ib0;
    // Error parsing type: ^{IVertexInputState=^^?{atomic<int>=Ai}}, name: _vertexInput0
    struct map<std::__1::basic_string<char>, std::__1::shared_ptr<igl::ITexture>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<igl::ITexture>>>> _textureCache;
    _Bool _shouldClearBeforeDrawing;
    _Bool _shouldRespectSurfaceAspectRatio;
    _Bool _shouldDrawYUVOpaquely;
    _Bool _shouldPremultiplyAlpha;
    _Bool _flip;
    double _strength;
    NSString *_fullFragmentShader;
    long long _inputPixelFormat;
    CDUnion_7d78eca3 _textureVertices;
    struct _GLKMatrix4 _contentTransform;
    struct _GLKMatrix4 _textureTransform;
}

+ (long long)filterType;
+ (id)filterName;
@property(nonatomic) _Bool flip; // @synthesize flip=_flip;
@property(nonatomic) _Bool shouldPremultiplyAlpha; // @synthesize shouldPremultiplyAlpha=_shouldPremultiplyAlpha;
@property(nonatomic) _Bool shouldDrawYUVOpaquely; // @synthesize shouldDrawYUVOpaquely=_shouldDrawYUVOpaquely;
@property(nonatomic) _Bool shouldRespectSurfaceAspectRatio; // @synthesize shouldRespectSurfaceAspectRatio=_shouldRespectSurfaceAspectRatio;
@property(nonatomic) _Bool shouldClearBeforeDrawing; // @synthesize shouldClearBeforeDrawing=_shouldClearBeforeDrawing;
@property(nonatomic) long long inputPixelFormat; // @synthesize inputPixelFormat=_inputPixelFormat;
@property(copy, nonatomic) NSString *fullFragmentShader; // @synthesize fullFragmentShader=_fullFragmentShader;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(nonatomic) CDUnion_7d78eca3 textureVertices; // @synthesize textureVertices=_textureVertices;
@property(nonatomic) CDUnion_7d78eca3 contentVertices; // @synthesize contentVertices=_contentVertices;
@property(nonatomic) struct _GLKMatrix4 textureTransform; // @synthesize textureTransform=_textureTransform;
@property(nonatomic) struct _GLKMatrix4 contentTransform; // @synthesize contentTransform=_contentTransform;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct __CVBuffer *maskLayer;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)renderIGL:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)setupIGL;
- (shared_ptr_b95409fc)iglLoadTexture2D:(id)arg1;
- (unsigned int)_vertexBufferWithVertices:(CDUnion_7d78eca3)arg1;
- (void)configureProgram:(id)arg1;
- (id)fragmentShader;
- (id)fragmentShaderPrecision;
- (id)fragmentFunctions;
- (id)_generateFullFragmentShader;
- (id)strengthShaderCode;
- (id)vertexShader;
- (shared_ptr_3ca5f01e)fragmentBufferIGL:(shared_ptr_b95409fc)arg1;
- (shared_ptr_3ca5f01e)vertexBufferUniformsIGL;
- (id)samplersIGL;
- (id)fragmentShaderIGL;
- (id)vertexShaderIGL;
- (id)fullVertexShader;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

