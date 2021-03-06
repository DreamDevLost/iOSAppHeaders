//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface FBMPStillImageReplayer : NSObject
{
    struct mutex _videoQueueLock;
    struct Optional<std::__1::pair<FBMPVideoData *, FBMPDataMetadata>> _lastStillImageData;
    double _lastReplayTime;
    id <FBCancelable> _delayReplayCancelable;
    NSObject<OS_dispatch_queue> *_videoQueue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
- (_Bool)_replayLastStillImageWithMinIntervalOnProcessorFilter:(id)arg1;
- (void)clearOnVideoQueue:(id)arg1;
- (void)replayLastStillImageIfNeededOnProcessorFilter:(id)arg1;
- (void)recordLastStillImageVideoData:(id)arg1 withMetadata:(struct FBMPDataMetadata)arg2;

@end

