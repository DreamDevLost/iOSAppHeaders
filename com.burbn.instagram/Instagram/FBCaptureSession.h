//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureSession, AVCaptureVideoPreviewLayer, NSObject<OS_dispatch_queue>, NSString;

@interface FBCaptureSession : NSObject
{
    AVCaptureSession *_captureSession;
    struct recursive_mutex _captureSessionLock;
    NSString *_sessionName;
    unsigned long long _retryCounter;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    id <FBCaptureSessionStateDelegate> _stateDelegate;
    id <FBCaptureSessionRuntimeErrorDelegate> _runtimeErrorDelegate;
    NSObject<OS_dispatch_queue> *_restartSessionQueue;
    struct OpaqueCMClock *_clock;
}

@property(nonatomic) struct OpaqueCMClock *clock; // @synthesize clock=_clock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *restartSessionQueue; // @synthesize restartSessionQueue=_restartSessionQueue;
@property(nonatomic) __weak id <FBCaptureSessionRuntimeErrorDelegate> runtimeErrorDelegate; // @synthesize runtimeErrorDelegate=_runtimeErrorDelegate;
@property(nonatomic) __weak id <FBCaptureSessionStateDelegate> stateDelegate; // @synthesize stateDelegate=_stateDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_handleCaptureSessionRuntimeErrorNotification:(id)arg1;
- (void)_handleCaptureSessionRuntimeErrorNotificationSafe:(id)arg1;
- (void)_handleCaptureSessionDidResignInterruptedNotification:(id)arg1;
- (void)_handleCaptureSessionDidBecomeInterruptedNotification:(id)arg1;
- (void)_handleCaptureSessionNotification:(id)arg1;
- (void)_handleCaptureDidStopRunningNotification:(id)arg1;
- (void)_handleCaptureDidStartRunningNotification:(id)arg1;
- (id)videoPreviewLayer;
- (_Bool)updateSessionPreset:(id)arg1;
- (void)updateCaptureSessionWithBlock:(CDUnknownBlockType)arg1;
- (void)restartSession;
- (void)stopSession;
- (void)pauseSession;
- (void)startSession;
- (void)warmupSession;
@property(readonly, copy, nonatomic) NSString *sessionPreset;
@property(readonly, nonatomic, getter=isInterrupted) _Bool interrupted;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) unsigned long long mediaType;
- (void)addOutputs:(id)arg1;
- (void)addInputs:(id)arg1;
- (void)dealloc;
- (id)initWithSessionName:(id)arg1 withRestartSessionQueue:(id)arg2 config:(struct FBCaptureSessionConfig)arg3;
- (id)initWithSessionName:(id)arg1 withRestartSessionQueue:(id)arg2;

@end
