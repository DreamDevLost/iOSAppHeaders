//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLiveLikeCountIntervalPuller, NSArray;

@protocol IGLiveLikeCountIntervalPullerDelegate <NSObject>
- (void)likeCountIntervalPuller:(IGLiveLikeCountIntervalPuller *)arg1 didLoadTotalBurstLikeCount:(long long)arg2;
- (void)likeCountIntervalPuller:(IGLiveLikeCountIntervalPuller *)arg1 didLoadTotalLikeCount:(long long)arg2 likerInfos:(NSArray *)arg3;
@end

