//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPerformanceLogger, NSMutableSet;

@interface IGStoryViewerLaunchPerformanceLogger : NSObject
{
    IGPerformanceLogger *_performanceLogger;
    NSMutableSet *_inProgressReelPKsSet;
    NSMutableSet *_markViewerDidAppearReelPKsSet;
    NSMutableSet *_markFirstItemStartToPlaybackReelPKsSet;
}

+ (id)sharedLogger;
- (void).cxx_destruct;
- (void)markFirstItemStartToPlaybackWithReelPK:(id)arg1;
- (void)markStoryViewerDidAppearWithReelPK:(id)arg1;
- (void)markStoryViewerAppearOnScreenWithReelPK:(id)arg1;
- (void)markVideoReceivedWithReelPK:(id)arg1 isLoadedFromCache:(_Bool)arg2;
- (void)markPhotoReceivedWithReelPK:(id)arg1 loadSource:(unsigned long long)arg2;
- (void)markReelJSONReceivedWithTrayViewModel:(id)arg1 isLoadedFromCache:(_Bool)arg2;
- (void)markerEndWithSuccess:(_Bool)arg1 reelPK:(id)arg2;
- (void)markerEndCancelWithReelPK:(id)arg1 cancelReason:(unsigned long long)arg2;
- (void)markerStartWithTrayViewModel:(id)arg1 entryPoint:(long long)arg2 trayPosition:(long long)arg3 tappedWatchAllButton:(_Bool)arg4;
- (id)_initWithPerformanceLogger:(id)arg1;

@end

