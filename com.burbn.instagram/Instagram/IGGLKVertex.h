//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface IGGLKVertex : NSObject <NSCopying>
{
    NSArray *_attributes;
}

@property(readonly, copy, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToVertex:(id)arg1;
- (id)initWithAttributes:(id)arg1;

@end

