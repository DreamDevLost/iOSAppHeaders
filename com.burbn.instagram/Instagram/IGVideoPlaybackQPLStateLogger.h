//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGVideoPerformanceLogger, IGVideoPlaybackQPLLogger, IGVideoProfilerQPLLogger, IGVideoProfilerStaticPlaybackData, NSString;

@interface IGVideoPlaybackQPLStateLogger : NSObject
{
    IGVideoPlaybackQPLLogger *_qplLogger;
    IGVideoPerformanceLogger *_perfLogger;
    IGVideoProfilerQPLLogger *_profilerLogger;
    id <IGVideoPlaybackStateProvider> _stateProvider;
    id <IGVideoPlaybackDataProvider> _playbackDataProvider;
    NSString *_mediaId;
    IGVideoProfilerStaticPlaybackData *_videoProfilerMetadata;
}

- (void).cxx_destruct;
- (void)_logVideoProfilerState:(long long)arg1;
- (void)logVideoRepresentationChangedFromId:(id)arg1 toId:(id)arg2 extras:(id)arg3;
- (void)logEventFromState:(long long)arg1 toState:(long long)arg2 loggingParams:(id)arg3;
- (id)initWithQplLogger:(id)arg1 perfLogger:(id)arg2 stateProvider:(id)arg3 playbackDataProvider:(id)arg4 videoProfilerMetadata:(id)arg5 videoProfilerLogger:(id)arg6 mediaId:(id)arg7;

@end

