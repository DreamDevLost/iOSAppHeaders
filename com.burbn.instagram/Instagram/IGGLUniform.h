//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSValue;

@interface IGGLUniform : NSObject
{
    int _location;
    int _size;
    unsigned int _type;
    int _textureUnit;
    NSValue *_value;
    id _texture;
}

@property(nonatomic) int textureUnit; // @synthesize textureUnit=_textureUnit;
@property(retain, nonatomic) id texture; // @synthesize texture=_texture;
@property(retain, nonatomic) NSValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) int size; // @synthesize size=_size;
@property(readonly, nonatomic) int location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)setNormalizedAttributePointerCount:(int)arg1 type:(unsigned int)arg2 stride:(int)arg3 offset:(const void *)arg4;
- (void)setAttributePointerCount:(int)arg1 type:(unsigned int)arg2 stride:(int)arg3 offset:(const void *)arg4;
- (void)flush;
- (id)initWithLocation:(int)arg1 size:(int)arg2 type:(unsigned int)arg3;

@end

