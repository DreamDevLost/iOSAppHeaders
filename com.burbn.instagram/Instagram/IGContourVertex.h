//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface IGContourVertex : NSObject <NSCopying>
{
    unsigned long long _cachedHash;
    double _x;
    double _y;
}

+ (id)newWithX:(double)arg1 y:(double)arg2;
+ (id)newWithPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double y; // @synthesize y=_y;
@property(readonly, nonatomic) double x; // @synthesize x=_x;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

