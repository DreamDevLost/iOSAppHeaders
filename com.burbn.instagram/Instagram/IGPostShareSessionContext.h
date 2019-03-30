//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSOrderedSet;

@interface IGPostShareSessionContext : FBValueObject <NSCopying, NSCoding>
{
    NSDictionary *_shareIdToConfig;
    NSDictionary *_shareIdToStatus;
    NSOrderedSet *_shareIdSortedByShareTime;
    long long _retryCount;
}

@property(readonly, nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, copy, nonatomic) NSOrderedSet *shareIdSortedByShareTime; // @synthesize shareIdSortedByShareTime=_shareIdSortedByShareTime;
@property(readonly, copy, nonatomic) NSDictionary *shareIdToStatus; // @synthesize shareIdToStatus=_shareIdToStatus;
@property(readonly, copy, nonatomic) NSDictionary *shareIdToConfig; // @synthesize shareIdToConfig=_shareIdToConfig;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithShareIdToConfig:(id)arg1 shareIdToStatus:(id)arg2 shareIdSortedByShareTime:(id)arg3 retryCount:(long long)arg4;
- (id)initWithCoder:(id)arg1;

@end
