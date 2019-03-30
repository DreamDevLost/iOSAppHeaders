//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGVideoLoadingConfig : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isPrefetch;
    _Bool _cancelable;
    _Bool _allowMultipleSessionsPerVideo;
    _Bool _useNewCache;
    long long _progressiveLengthInBytes;
    double _dashLengthInSeconds;
    long long _progressiveReadAheadLimitInBytes;
    double _dashReadAheadLimitInSeconds;
    double _bandwidthFraction;
    NSString *_abrPipeline;
}

@property(readonly, copy, nonatomic) NSString *abrPipeline; // @synthesize abrPipeline=_abrPipeline;
@property(readonly, nonatomic) double bandwidthFraction; // @synthesize bandwidthFraction=_bandwidthFraction;
@property(readonly, nonatomic) double dashReadAheadLimitInSeconds; // @synthesize dashReadAheadLimitInSeconds=_dashReadAheadLimitInSeconds;
@property(readonly, nonatomic) long long progressiveReadAheadLimitInBytes; // @synthesize progressiveReadAheadLimitInBytes=_progressiveReadAheadLimitInBytes;
@property(readonly, nonatomic) double dashLengthInSeconds; // @synthesize dashLengthInSeconds=_dashLengthInSeconds;
@property(readonly, nonatomic) long long progressiveLengthInBytes; // @synthesize progressiveLengthInBytes=_progressiveLengthInBytes;
@property(readonly, nonatomic) _Bool useNewCache; // @synthesize useNewCache=_useNewCache;
@property(readonly, nonatomic) _Bool allowMultipleSessionsPerVideo; // @synthesize allowMultipleSessionsPerVideo=_allowMultipleSessionsPerVideo;
@property(readonly, nonatomic) _Bool cancelable; // @synthesize cancelable=_cancelable;
@property(readonly, nonatomic) _Bool isPrefetch; // @synthesize isPrefetch=_isPrefetch;
- (void).cxx_destruct;
- (id)initWithIsPrefetch:(_Bool)arg1 cancelable:(_Bool)arg2 allowMultipleSessionsPerVideo:(_Bool)arg3 useNewCache:(_Bool)arg4 progressiveLengthInBytes:(long long)arg5 dashLengthInSeconds:(double)arg6 progressiveReadAheadLimitInBytes:(long long)arg7 dashReadAheadLimitInSeconds:(double)arg8 bandwidthFraction:(double)arg9 abrPipeline:(id)arg10;

@end
