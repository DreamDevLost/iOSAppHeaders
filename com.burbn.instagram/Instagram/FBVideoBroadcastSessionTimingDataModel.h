//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBVideoBroadcastSessionTimingDataModel : NSObject
{
    double _recordedAudioDuration;
    unsigned long long _recordedAudioSamples;
    unsigned long long _recordedVideoFrames;
    CDStruct_1b6d18a9 _recordingLastPTS;
    CDStruct_1b6d18a9 _mostRecentAudioPTS;
    CDStruct_1b6d18a9 _mostRecentVideoPTS;
}

@property(nonatomic) CDStruct_1b6d18a9 mostRecentVideoPTS; // @synthesize mostRecentVideoPTS=_mostRecentVideoPTS;
@property(nonatomic) CDStruct_1b6d18a9 mostRecentAudioPTS; // @synthesize mostRecentAudioPTS=_mostRecentAudioPTS;
@property(nonatomic) CDStruct_1b6d18a9 recordingLastPTS; // @synthesize recordingLastPTS=_recordingLastPTS;
@property(nonatomic) unsigned long long recordedVideoFrames; // @synthesize recordedVideoFrames=_recordedVideoFrames;
@property(nonatomic) unsigned long long recordedAudioSamples; // @synthesize recordedAudioSamples=_recordedAudioSamples;
@property(nonatomic) double recordedAudioDuration; // @synthesize recordedAudioDuration=_recordedAudioDuration;
- (id)init;

@end
