//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGVideoPlaybackLoggingConfig, NSString;

@interface IGVideoPlayerConfig : NSObject
{
    _Bool _looping;
    _Bool _enableLogging;
    _Bool _forceNoRequestReadAhead;
    long long _mediaType;
    IGVideoPlaybackLoggingConfig *_loggingConfig;
    NSString *_mediaId;
    double _bandwidthFraction;
    NSString *_abrPipeline;
    double _minBufferSizeSecs;
    struct CGSize _viewSize;
}

@property(readonly, nonatomic) double minBufferSizeSecs; // @synthesize minBufferSizeSecs=_minBufferSizeSecs;
@property(readonly, nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(readonly, copy, nonatomic) NSString *abrPipeline; // @synthesize abrPipeline=_abrPipeline;
@property(readonly, nonatomic) double bandwidthFraction; // @synthesize bandwidthFraction=_bandwidthFraction;
@property(readonly, nonatomic) _Bool forceNoRequestReadAhead; // @synthesize forceNoRequestReadAhead=_forceNoRequestReadAhead;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) _Bool enableLogging; // @synthesize enableLogging=_enableLogging;
@property(readonly, nonatomic) IGVideoPlaybackLoggingConfig *loggingConfig; // @synthesize loggingConfig=_loggingConfig;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) _Bool looping; // @synthesize looping=_looping;
- (void).cxx_destruct;
- (id)initWithLooping:(_Bool)arg1 mediaType:(long long)arg2 loggingConfig:(id)arg3 enableLogging:(_Bool)arg4 mediaId:(id)arg5 forceNoRequestReadAhead:(_Bool)arg6 bandwidthFraction:(double)arg7 abrPipeline:(id)arg8 viewSize:(struct CGSize)arg9 minBufferSizeSecs:(double)arg10;

@end

