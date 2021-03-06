//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSSet;

@interface FBARModelMetadataResponse : FBValueObject <NSCopying, NSCoding>
{
    unsigned long long _capability;
    unsigned long long _version;
    NSSet *_modelsWithType;
}

@property(readonly, copy, nonatomic) NSSet *modelsWithType; // @synthesize modelsWithType=_modelsWithType;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long capability; // @synthesize capability=_capability;
- (void).cxx_destruct;
- (id)initWithCapability:(unsigned long long)arg1 version:(unsigned long long)arg2 modelsWithType:(id)arg3;

@end

