//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoStreamingAACPacketizer.h"
#import "FBVideoStreamingErrorProcessor.h"

@class NSString;

@interface FBAACPacketizerXplatWrapper : NSObject <FBVideoStreamingAACPacketizer, FBVideoStreamingErrorProcessor>
{
    struct shared_ptr<facebook::mobile::xplat::livestreaming::AudioPacketizer> _impl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)droppedPackets:(shared_ptr_3f407d03)arg1 withReason:(id)arg2;
- (void)processError:(id)arg1;
- (void)packetAudioFrame:(const char *)arg1 size:(unsigned long long)arg2 pts:(CDStruct_1b6d18a9)arg3 dts:(CDStruct_1b6d18a9)arg4 duration:(CDStruct_1b6d18a9)arg5;
- (void)packetAudioSpecificConfigForAudioStreamDescription:(struct AudioStreamBasicDescription)arg1 pts:(CDStruct_1b6d18a9)arg2 dts:(CDStruct_1b6d18a9)arg3;
- (id)initWithAudioConfig:(AudioConfig_348514e6)arg1 networkSession:(shared_ptr_c386cb19)arg2 factory:(shared_ptr_b7837d35)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
