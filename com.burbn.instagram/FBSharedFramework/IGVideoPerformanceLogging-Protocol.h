//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FNFDashEventListener.h"
#import "IGStreamingVideoCachePerformanceEventListener.h"

@class NSString;

@protocol IGVideoPerformanceLogging <IGStreamingVideoCachePerformanceEventListener, FNFDashEventListener>
- (_Bool)isFirstVideoResponseDataAtLeastPartiallyInCache;
- (void)notifyVideoDidStallForMediaId:(NSString *)arg1;
- (void)notifyVideoDidPauseForMediaId:(NSString *)arg1;
- (void)notifyVideoDidExitForMediaId:(NSString *)arg1;
- (void)notifyVideoDidStartPlayingForMediaId:(NSString *)arg1;
@end

