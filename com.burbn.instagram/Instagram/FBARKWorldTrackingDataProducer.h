//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMPBaseProducerPort, NSObject<OS_dispatch_queue>;

@interface FBARKWorldTrackingDataProducer : NSObject
{
    NSObject<OS_dispatch_queue> *_dataProductionQueue;
    double _lastProducedDataTimestamp;
    unsigned long long _dataCounter;
    FBMPBaseProducerPort *_producerPort;
}

+ (id)newWithProducerPort:(id)arg1;
@property(readonly, nonatomic) FBMPBaseProducerPort *producerPort; // @synthesize producerPort=_producerPort;
- (void).cxx_destruct;
- (void)_produceDataWithARFrame:(id)arg1;
- (void)produceDataWithARFrame:(id)arg1;
- (id)initWithProducerPort:(id)arg1;

@end

