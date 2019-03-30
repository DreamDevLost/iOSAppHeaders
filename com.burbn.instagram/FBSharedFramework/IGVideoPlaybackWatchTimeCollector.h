//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGVideoPlaybackWatchTimeCollector : NSObject
{
    double _aggregateWatchTime;
    long long _numberOfPlaybackFragments;
}

@property(readonly, nonatomic) long long numberOfPlaybackFragments;
@property(readonly, nonatomic) double watchTime;
- (void)addPlaybackFragmentWithCurrentPosition:(double)arg1 lsp:(double)arg2 loopCount:(long long)arg3 duration:(double)arg4;
- (id)init;

@end
