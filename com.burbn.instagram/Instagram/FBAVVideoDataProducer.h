//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMPBaseProducerPort, NSArray;

@interface FBAVVideoDataProducer : NSObject
{
    NSArray *_framePerformanceTrackers;
    unsigned long long _dataCounter;
    FBMPBaseProducerPort *_producerPort;
}

+ (id)newWithProducerPort:(id)arg1 framePerformanceTrackers:(id)arg2;
@property(readonly, nonatomic) FBMPBaseProducerPort *producerPort; // @synthesize producerPort=_producerPort;
- (void).cxx_destruct;
- (void)_notifyPerformanceTrackersRenderingStarted;
- (void)produceVideoDataWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 depthData:(struct __CVBuffer *)arg2 fromConnection:(id)arg3 videoDeviceInput:(id)arg4 videoBufferTransform:(unsigned long long)arg5;
- (id)initWithProducerPort:(id)arg1 framePerformanceTrackers:(id)arg2;

@end

