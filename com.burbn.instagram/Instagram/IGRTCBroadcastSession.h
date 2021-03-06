//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoBroadcastRTCSession.h"
#import "IGCallSessionDelegate.h"
#import "IGWebRTCAudioStallSentryDelegate.h"
#import "IGWebRTCPeerConnectionControllerDelegate.h"

@class IGAudioSessionClient, IGCallSession, IGLiveBroadcastLoggingContext, IGUserSession, IGWebRTCAudioStallSentry, IGWebRTCPeerConnectionController, NSDate, NSSet, NSString;

@interface IGRTCBroadcastSession : NSObject <IGCallSessionDelegate, IGWebRTCPeerConnectionControllerDelegate, IGWebRTCAudioStallSentryDelegate, FBVideoBroadcastRTCSession>
{
    struct shared_ptr<FB::Functional::PromiseEither<NSError *, FBDiskVideoRecorderDiskResults *>> _dvrFinishRecordingPromise;
    CDStruct_1b6d18a9 _baseTimestamp;
    _Bool _restarting;
    _Bool _didJoin;
    _Bool _fetchingStats;
    id <FBVideoBroadcastSessionLiveWithDelegate> _liveWithDelegate;
    id <FBVideoBroadcastSessionDelegate> _delegate;
    id <FBVideoBroadcastSessionConnectionSetupDelegate> _connectionSetupDelegate;
    IGWebRTCPeerConnectionController *_peerConnectionController;
    IGCallSession *_callSession;
    NSString *_broadcastId;
    IGUserSession *_userSession;
    IGAudioSessionClient *_audioClient;
    long long _state;
    long long _videoCropMode;
    double _lastStatsFetchTime;
    NSDate *_sessionStartedTime;
    NSDate *_sessionJoinedTime;
    id <FBDiskVideoRecorder> _diskRecorder;
    IGLiveBroadcastLoggingContext *_loggingContext;
    id <IGLiveWithParticipantInfoDelegate><IGLiveBroadcastInfoProvider> _liveInfoDelegate;
    IGWebRTCAudioStallSentry *_audioSentry;
    CDStruct_71a17d3c _config;
    struct FBVideoBroadcastSessionStats _lastFetchedStats;
}

@property(readonly, nonatomic) IGWebRTCAudioStallSentry *audioSentry; // @synthesize audioSentry=_audioSentry;
@property(readonly, nonatomic) __weak id <IGLiveWithParticipantInfoDelegate><IGLiveBroadcastInfoProvider> liveInfoDelegate; // @synthesize liveInfoDelegate=_liveInfoDelegate;
@property(readonly, nonatomic) IGLiveBroadcastLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(retain, nonatomic) id <FBDiskVideoRecorder> diskRecorder; // @synthesize diskRecorder=_diskRecorder;
@property(retain, nonatomic) NSDate *sessionJoinedTime; // @synthesize sessionJoinedTime=_sessionJoinedTime;
@property(retain, nonatomic) NSDate *sessionStartedTime; // @synthesize sessionStartedTime=_sessionStartedTime;
@property(nonatomic) double lastStatsFetchTime; // @synthesize lastStatsFetchTime=_lastStatsFetchTime;
@property(nonatomic) _Bool fetchingStats; // @synthesize fetchingStats=_fetchingStats;
@property(nonatomic) struct FBVideoBroadcastSessionStats lastFetchedStats; // @synthesize lastFetchedStats=_lastFetchedStats;
@property(nonatomic) long long videoCropMode; // @synthesize videoCropMode=_videoCropMode;
@property(nonatomic) _Bool didJoin; // @synthesize didJoin=_didJoin;
@property(nonatomic) _Bool restarting; // @synthesize restarting=_restarting;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) IGAudioSessionClient *audioClient; // @synthesize audioClient=_audioClient;
@property(readonly, nonatomic) CDStruct_71a17d3c config; // @synthesize config=_config;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *broadcastId; // @synthesize broadcastId=_broadcastId;
@property(readonly, nonatomic) IGCallSession *callSession; // @synthesize callSession=_callSession;
@property(retain, nonatomic) IGWebRTCPeerConnectionController *peerConnectionController; // @synthesize peerConnectionController=_peerConnectionController;
@property __weak id <FBVideoBroadcastSessionConnectionSetupDelegate> connectionSetupDelegate; // @synthesize connectionSetupDelegate=_connectionSetupDelegate;
@property __weak id <FBVideoBroadcastSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <FBVideoBroadcastSessionLiveWithDelegate> liveWithDelegate; // @synthesize liveWithDelegate=_liveWithDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)audioStallSentry:(id)arg1 detectedAudioStallWithAudioBytes:(unsigned long long)arg2 afterInterval:(double)arg3;
- (void)peerConnectionControllerDidConnect:(id)arg1;
- (void)peerConnectionController:(id)arg1 didEndWithError:(id)arg2;
- (void)peerConnectionControllerDidDisconnect:(id)arg1;
- (void)peerConnectionController:(id)arg1 didResumeVideoForStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didStallVideoForStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didRemoveStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didRemoveVideoViewForStreamId:(id)arg2;
- (void)peerConnectionController:(id)arg1 didAddVideoInView:(id)arg2 streamId:(id)arg3;
- (void)peerConnectionController:(id)arg1 didAddStreamId:(id)arg2;
- (void)callSession:(id)arg1 didStateTransitionForUser:(id)arg2 fromState:(long long)arg3 toState:(long long)arg4;
- (void)callSessionDidDismiss:(id)arg1 reason:(id)arg2;
- (void)callSessionDidMediaUpdate:(id)arg1;
- (void)callSessionDidReceiveInvitation:(id)arg1;
- (void)muteRTCAudioDidChange;
- (void)reachabilityDidChange:(id)arg1;
- (void)setupConnectionForRestart:(_Bool)arg1 encodingDimension:(struct CGSize)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)fetchSdpAnswerWithSdpOffer:(id)arg1 encodingDimension:(struct CGSize)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)restartSessionAllowingIceRestart:(_Bool)arg1;
- (void)handleSessionError:(id)arg1;
- (void)leaveWithReason:(long long)arg1 numParticipants:(id)arg2;
- (void)removeGuest:(id)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (struct FBVideoBroadcastRtmpSwapStats)swapStats;
- (void)setRtmpResolutionToSendToCSOnSwap:(struct CGSize)arg1;
- (void)endRTCCallAndMigrateSession:(CDUnknownBlockType)arg1;
- (id)liveWithSessionUserJoinedTime;
- (id)liveWithSessionStartedTime;
- (void)removeForceDisableGuestInviteReason:(unsigned long long)arg1;
- (void)addForceDisableGuestInviteReason:(unsigned long long)arg1;
- (_Bool)isBroadcastFull;
- (_Bool)isInvitable:(id)arg1 byBroadcasterID:(id)arg2;
- (void)declineInvitation;
- (void)leave;
- (void)join;
- (void)cancelInvitationForGuest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeGuest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ringUsers:(id)arg1 withLayout:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSSet *currentOrInvitedGuests;
- (void)switchToRTMPWithTimeout:(unsigned long long)arg1;
- (void)updateRtmpConfig:(CDStruct_9abd5f9f)arg1;
- (CDStruct_1b6d18a9)lastRecordedAudioTimestamp;
- (CDStruct_1b6d18a9)convertDeviceTimestampToStreamTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)baseTimestamp;
- (void)setBaseTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)setAdaptiveBitrateConfig:(struct AdaptiveBitrateConfig)arg1;
- (Class)videoEncoderClass;
- (void)onInterruptionEnded;
- (void)onInterruptionForReasonBackground:(_Bool)arg1;
- (struct FBVideoBroadcastSessionStats)stats;
- (_Bool)isConnectedToServer;
- (long long)readyState;
- (void)resumeAndUpload:(_Bool)arg1;
- (void)pause:(_Bool)arg1;
- (_Bool)hasSentMediaDataToServer;
- (void)swapVideoWidthAndHeightAfterOrientationChange;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)checkForDiskRecordingResultAndFinishBroadcast;
- (void)stop:(_Bool)arg1;
- (void)connectAndImmediatelyAllowStreaming:(_Bool)arg1;
- (void)finallyFetchedBroadcastID:(id)arg1 withWebRTCSessionConfig:(CDStruct_968ff9e3)arg2 rtmpConfig:(CDStruct_9abd5f9f)arg3 rtmpMessageChannel:(id)arg4;
- (void)startOffline;
- (void)processVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 config:(CDStruct_71a17d3c)arg2 broadcastId:(id)arg3 remoteCallMessageHandler:(id)arg4 defaultVideoCropMode:(long long)arg5 loggingContext:(id)arg6 liveWithDelegate:(id)arg7 liveInfoDelegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

