//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IGPostLiveLikeModel : NSObject
{
    double _offset;
    long long _regularLikesCount;
    long long _burstLikesCount;
    NSArray *_likerInfos;
}

@property(readonly, copy, nonatomic) NSArray *likerInfos; // @synthesize likerInfos=_likerInfos;
@property(readonly, nonatomic) long long burstLikesCount; // @synthesize burstLikesCount=_burstLikesCount;
@property(readonly, nonatomic) long long regularLikesCount; // @synthesize regularLikesCount=_regularLikesCount;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOffset:(double)arg1 dictionary:(id)arg2;

@end

