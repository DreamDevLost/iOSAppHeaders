//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGDirectVisualMessagePlayerLoggingInfo : NSObject
{
    _Bool _audioDetected;
    _Bool _isPlayingAudio;
    double _mediaCurrentTime;
    double _duration;
}

@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double mediaCurrentTime; // @synthesize mediaCurrentTime=_mediaCurrentTime;
@property(readonly, nonatomic) _Bool isPlayingAudio; // @synthesize isPlayingAudio=_isPlayingAudio;
@property(readonly, nonatomic) _Bool audioDetected; // @synthesize audioDetected=_audioDetected;
- (id)initWithAudioDetected:(_Bool)arg1 isPlayingAudio:(_Bool)arg2 mediaCurrentTime:(double)arg3 duration:(double)arg4;

@end

