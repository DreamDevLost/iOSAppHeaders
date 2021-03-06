//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageFilter.h"

@class IGSurface, NSString;

@interface IGRetouchingFilter : IGImageFilter
{
    IGSurface *_quarterBuff;
    IGSurface *_smallBuffA;
    IGSurface *_smallBuffB;
    int _passIndex;
    struct CGSize _inputImageSize;
    int _fragBufferWriteIndex;
    struct vector<std::__1::shared_ptr<igl::IBuffer>, std::__1::allocator<std::__1::shared_ptr<igl::IBuffer>>> _fragBuffers;
    int _useLut;
    float _lutAlpha;
    float _smoothingAlpha;
    float _smoothingIntensity;
    float _sharpeningIntensity;
    float _screenIntensity;
    float _contrastIntensity;
    float _vignetteInRadius;
    float _vignetteOutRadius;
    NSString *_lutTextureName;
    struct _GLKVector3 _colorIntensity;
    struct _GLKVector4 _vignetteInColor;
    struct _GLKVector4 _vignetteOutColor;
}

@property(nonatomic) float vignetteOutRadius; // @synthesize vignetteOutRadius=_vignetteOutRadius;
@property(nonatomic) float vignetteInRadius; // @synthesize vignetteInRadius=_vignetteInRadius;
@property(nonatomic) struct _GLKVector4 vignetteOutColor; // @synthesize vignetteOutColor=_vignetteOutColor;
@property(nonatomic) struct _GLKVector4 vignetteInColor; // @synthesize vignetteInColor=_vignetteInColor;
@property(nonatomic) float contrastIntensity; // @synthesize contrastIntensity=_contrastIntensity;
@property(nonatomic) float screenIntensity; // @synthesize screenIntensity=_screenIntensity;
@property(nonatomic) float sharpeningIntensity; // @synthesize sharpeningIntensity=_sharpeningIntensity;
@property(nonatomic) struct _GLKVector3 colorIntensity; // @synthesize colorIntensity=_colorIntensity;
@property(nonatomic) float smoothingIntensity; // @synthesize smoothingIntensity=_smoothingIntensity;
@property(nonatomic) float smoothingAlpha; // @synthesize smoothingAlpha=_smoothingAlpha;
@property(retain, nonatomic) NSString *lutTextureName; // @synthesize lutTextureName=_lutTextureName;
@property(nonatomic) float lutAlpha; // @synthesize lutAlpha=_lutAlpha;
@property(nonatomic) int useLut; // @synthesize useLut=_useLut;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)renderIGL:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)configureProgram:(id)arg1;
- (id)samplersIGL;
- (id)samplers;
- (shared_ptr_3ca5f01e)fragmentBufferIGL:(shared_ptr_e4063ace)arg1;
- (id)fragmentBufferDataIGL:(shared_ptr_e4063ace)arg1;
- (id)fragmentShaderIGL;
- (_Bool)filterSupportsIGL;
- (id)fragmentShader;
- (id)fragmentFunctions;
- (id)strengthShaderCode;
- (id)postFragmentShader;
- (id)postSamplers;
- (id)fragmentShaderPrecision;
- (void)dealloc;
- (id)init;

@end

