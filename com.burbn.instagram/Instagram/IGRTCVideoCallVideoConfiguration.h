//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGRTCVideoCallVideoConfiguration : FBValueObject <NSCopying, NSCoding>
{
    double _maxWidth;
    long long _maxBitrate;
}

@property(readonly, nonatomic) long long maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(readonly, nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (id)initWithMaxWidth:(double)arg1 maxBitrate:(long long)arg2;

@end

