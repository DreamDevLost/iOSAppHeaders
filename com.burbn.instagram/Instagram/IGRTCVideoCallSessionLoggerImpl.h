//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRTCVideoCallSessionLogger.h"

@class IGVideoCallLoggingContext, NSString;

@interface IGRTCVideoCallSessionLoggerImpl : NSObject <IGRTCVideoCallSessionLogger>
{
    IGVideoCallLoggingContext *_loggingContext;
}

- (void).cxx_destruct;
- (void)logLeaveStep:(long long)arg1;
- (void)updateStalledVideoCount:(unsigned long long)arg1;
- (void)setVideoEnabled:(_Bool)arg1;
- (void)setTotalLocalVideoPacketSent:(unsigned long long)arg1;
- (void)setTotalLocalVideoPacketLoss:(unsigned long long)arg1;
- (void)setTotalLocalAudioPacketSent:(unsigned long long)arg1;
- (void)setTotalLocalAudioPacketLoss:(unsigned long long)arg1;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)logVideoStartedPlayingForStreamId:(id)arg1 participantPk:(id)arg2;
- (void)logVideoShouldStartForStreamId:(id)arg1 participantPk:(id)arg2;
- (void)logServerMediaUpdateReceived;
- (void)logRejoinResult:(_Bool)arg1 error:(id)arg2;
- (void)logRejoinAttempt;
- (void)logReconnect;
- (void)logParticipantStatusUpdate:(id)arg1;
- (void)logParticipantLeft;
- (void)logParticipantJoined;
- (void)logJoinResult:(id)arg1 mqttConnected:(_Bool)arg2;
- (void)logFirstParticipantJoin;
- (void)logError:(id)arg1 errorAction:(long long)arg2;
- (void)logEndCall:(id)arg1 mqttConnected:(_Bool)arg2 tsLogString:(id)arg3;
- (void)logDisconnect;
- (void)logAudioDeviceRestartedWithPreviouslyStarted:(_Bool)arg1;
- (void)logAudioFocusResumed;
- (void)logAudioFocusLost;
- (void)logAudioBytesSentStalled;
- (void)logAppTerminated;
- (void)addLocalVideoRTTValue:(long long)arg1;
- (void)addLocalAudioRTTValue:(long long)arg1;
- (id)initWithLoggingContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

