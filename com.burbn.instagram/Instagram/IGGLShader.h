//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGContext;

@interface IGGLShader : NSObject
{
    unsigned int _shaderId;
    void *_iglShader;
    IGContext *_context;
}

@property(nonatomic) __weak IGContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) void *iglShader; // @synthesize iglShader=_iglShader;
@property(readonly, nonatomic) unsigned int shaderId; // @synthesize shaderId=_shaderId;
- (void).cxx_destruct;
- (id)initShaderWithSource:(id)arg1 type:(long long)arg2;
- (id)initIglShaderWithSource:(id)arg1 type:(long long)arg2;
- (id)initIglFragmentShaderWithSource:(id)arg1;
- (id)initIglVertexShaderWithSource:(id)arg1;
- (id)initFragmentShaderWithSource:(id)arg1;
- (id)initVertexShaderWithSource:(id)arg1;
- (void)dealloc;

@end
