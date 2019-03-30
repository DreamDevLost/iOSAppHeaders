//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IGVideoPlaybackStateProvider <NSObject>
- (_Bool)useLastLoopCount;
- (double)lastLoopCount;
- (_Bool)hasStarted;
- (_Bool)hasSeek;
- (double)bufferingStartTime;
- (long long)pauseReason;
- (double)lastStartingPosition;
- (double)shouldStartTime;
- (long long)originalPlaybackReason;
@end

