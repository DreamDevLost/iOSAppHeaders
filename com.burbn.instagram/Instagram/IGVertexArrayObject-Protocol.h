//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGContext, IGGLProgram, NSString;

@protocol IGVertexArrayObject <NSObject>
- (void)setStaticData:(const void *)arg1 length:(unsigned long long)arg2;
- (void)setRange:(id <IGDrawMappedBufferRange>)arg1;
- (void)addNormalizedNamed:(NSString *)arg1 count:(unsigned long long)arg2 type:(unsigned long long)arg3 offset:(unsigned long long)arg4;
- (void)addNamed:(NSString *)arg1 count:(unsigned long long)arg2 type:(unsigned long long)arg3 offset:(unsigned long long)arg4;
- (void)unbind;
- (void)bind;
- (id)initWithContext:(IGContext *)arg1 program:(IGGLProgram *)arg2 stride:(unsigned long long)arg3;
@end

