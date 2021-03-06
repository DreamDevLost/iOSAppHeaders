//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IGGLKTexture2D;

@interface IGGLKUniformValue : NSObject <NSCopying>
{
    id _value;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToUniformValue:(id)arg1;
@property(readonly, nonatomic) IGGLKTexture2D *texture2DValue;
@property(readonly, nonatomic) union _GLKMatrix4 floatMatrix4Value;
@property(readonly, nonatomic) union _GLKMatrix3 floatMatrix3Value;
@property(readonly, nonatomic) union _GLKMatrix2 floatMatrix2Value;
@property(readonly, nonatomic) union _IGGLKIntVector4 boolVector4Value;
@property(readonly, nonatomic) union _IGGLKIntVector3 boolVector3Value;
@property(readonly, nonatomic) union _IGGLKIntVector2 boolVector2Value;
@property(readonly, nonatomic) _Bool boolValue;
@property(readonly, nonatomic) union _IGGLKIntVector4 intVector4Value;
@property(readonly, nonatomic) union _IGGLKIntVector3 intVector3Value;
@property(readonly, nonatomic) union _IGGLKIntVector2 intVector2Value;
@property(readonly, nonatomic) int intValue;
@property(readonly, nonatomic) union _GLKVector4 floatVector4Value;
@property(readonly, nonatomic) union _GLKVector3 floatVector3Value;
@property(readonly, nonatomic) union _GLKVector2 floatVector2Value;
@property(readonly, nonatomic) float floatValue;
- (id)initWithTexture2D:(id)arg1;
- (id)initWithFloatMatrix4:(union _GLKMatrix4)arg1;
- (id)initWithFloatMatrix3:(union _GLKMatrix3)arg1;
- (id)initWithFloatMatrix2:(union _GLKMatrix2)arg1;
- (id)initWithBoolVector4:(union _IGGLKIntVector4)arg1;
- (id)initWithBoolVector3:(union _IGGLKIntVector3)arg1;
- (id)initWithBoolVector2:(union _IGGLKIntVector2)arg1;
- (id)initWithBool:(_Bool)arg1;
- (id)initWithIntVector4:(union _IGGLKIntVector4)arg1;
- (id)initWithIntVector3:(union _IGGLKIntVector3)arg1;
- (id)initWithIntVector2:(union _IGGLKIntVector2)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithFloatVector4:(union _GLKVector4)arg1;
- (id)initWithFloatVector3:(union _GLKVector3)arg1;
- (id)initWithFloatVector2:(union _GLKVector2)arg1;
- (id)initWithFloat:(float)arg1;

@end

