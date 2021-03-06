//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMPFilter.h"
#import "FBMPPermissiveOutput.h"
#import "IGVideoProcessorControllerDelegate.h"

@class FBMPBaseConsumerPort, FBMPBaseProducerPort, NSArray, NSString;

@interface IGMPVideoProcessorController : NSObject <IGVideoProcessorControllerDelegate, FBMPFilter, FBMPPermissiveOutput>
{
    id <IGVideoProcessorControlling> _videoProcessorController;
    id <IGVideoProcessorControllerDelegate> _delegate;
    FBMPBaseConsumerPort *_videoConsumerPort;
    FBMPBaseProducerPort *_videoProducerPort;
    FBMPBaseConsumerPort *_audioConsumerPort;
    FBMPBaseProducerPort *_audioProducerPort;
    FBMPBaseConsumerPort *_worldTrackingConsumerPort;
}

@property(readonly, nonatomic) id <IGVideoProcessorControlling> videoProcessorController; // @synthesize videoProcessorController=_videoProcessorController;
- (void).cxx_destruct;
- (void)videoProcessorController:(id)arg1 didUpdateRequestedCameraCapabilities:(unsigned long long)arg2;
- (void)videoProcessorControllerIsReadyToProcessNewAREffect:(id)arg1;
- (void)videoProcessorController:(id)arg1 didFinishProcessingVideoBuffer:(struct opaqueCMSampleBuffer *)arg2 forPreview:(_Bool)arg3 forCapture:(_Bool)arg4;
- (void)videoProcessorController:(id)arg1 didFinishProcessingAudioBuffer:(struct opaqueCMSampleBuffer *)arg2 forPreview:(_Bool)arg3 forCapture:(_Bool)arg4;
- (_Bool)allowsConnectionsWithConsumerPortMapping:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *producerPorts;
- (id)consumerPorts;
- (void)invalidate;
- (void)sessionWillStop:(id)arg1;
- (void)sessionWillStart:(id)arg1;
- (void)sessionDisconnectedPort:(id)arg1 context:(id)arg2;
- (void)sessionConnectedPort:(id)arg1 context:(id)arg2;
- (id)initWithVideoProcessorController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

