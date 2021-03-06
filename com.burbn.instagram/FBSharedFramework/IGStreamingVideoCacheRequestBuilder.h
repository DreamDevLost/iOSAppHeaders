//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGVideoBandwithEstimateInformation, NSString, NSURL;

@interface IGStreamingVideoCacheRequestBuilder : NSObject
{
    NSURL *_url;
    struct _NSRange _requestedRange;
    long long _readAheadLimitInBytes;
    _Bool _ignoreCache;
    _Bool _isPrefetch;
    CDUnknownBlockType _mediaInfoParsedBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _errorBlock;
    NSString *_mediaId;
    long long _reason;
    IGVideoBandwithEstimateInformation *_bandwithEstimateInformation;
    id <IGStreamingVideoCachePerformanceEventListener> _performanceEventListener;
    id <IGQueueTimeObserving> _queueTimeObserver;
    _Bool _isAudio;
    NSString *_module;
    _Bool _useNewCache;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _duration;
    NSString *_streamFormat;
    _Bool _isTollFreeRequest;
    _Bool _useRequestForBwe;
}

+ (id)builderWithUrl:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (void)setDontUseRequestForBwe;
- (void)setTollFreeRequest:(_Bool)arg1;
- (void)onError:(CDUnknownBlockType)arg1;
- (void)onSuccess:(CDUnknownBlockType)arg1;
- (void)onProgress:(CDUnknownBlockType)arg1;
- (void)setStreamFormat:(id)arg1;
- (void)setDuration:(CDStruct_1b6d18a9)arg1;
- (void)setStartTime:(CDStruct_1b6d18a9)arg1;
- (void)setUseNewCache:(_Bool)arg1;
- (void)setModule:(id)arg1;
- (void)setIsAudio:(_Bool)arg1;
- (void)setQueueTimeObserver:(id)arg1;
- (void)setPerformanceEventListener:(id)arg1;
- (void)onMediaInfoParsed:(CDUnknownBlockType)arg1;
- (void)setBandwithEstimateInformation:(id)arg1;
- (void)setRequestReason:(long long)arg1;
- (void)setMediaId:(id)arg1;
- (void)setIsPrefetch:(_Bool)arg1;
- (void)setIgnoreCache:(_Bool)arg1;
- (void)setReadAheadLimitInBytes:(long long)arg1;
- (void)setRequestedRange:(struct _NSRange)arg1;
- (id)_initWithUrl:(id)arg1;

@end

