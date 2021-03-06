//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFNFVideoProfilerDashEventListener.h"

@class IGVideoProfilerDashMetadata, IGVideoProfilerQPLLogger, IGVideoProfilerStaticPlaybackData, NSString;

@interface IGVideoProfilerDashEventListener : NSObject <IGFNFVideoProfilerDashEventListener>
{
    IGVideoProfilerQPLLogger *_videoProfilerLogger;
    id <IGVideoPlaybackDataProvider> _playbackDataProvider;
    IGVideoProfilerStaticPlaybackData *_staticPlaybackData;
    NSString *_mediaId;
    IGVideoProfilerDashMetadata *_dashMetadata;
}

@property(readonly, nonatomic) IGVideoProfilerDashMetadata *dashMetadata; // @synthesize dashMetadata=_dashMetadata;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) IGVideoProfilerStaticPlaybackData *staticPlaybackData; // @synthesize staticPlaybackData=_staticPlaybackData;
@property(nonatomic) __weak id <IGVideoPlaybackDataProvider> playbackDataProvider; // @synthesize playbackDataProvider=_playbackDataProvider;
- (void).cxx_destruct;
- (void)chunkFetchCompleted:(id)arg1 trackType:(long long)arg2;
- (void)chunkFetchStarted:(id)arg1 trackType:(long long)arg2;
- (void)availableQualitiesChanged:(id)arg1;
- (void)videoRepresentationIdChanged:(id)arg1;
- (id)_nonnullStaticPlaybackData;
- (id)initWithMediaId:(id)arg1 videoProfilerLogger:(id)arg2;

@end

