//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioSessionRouteDescription, NSError, RTCAudioSession;

@protocol RTCAudioSessionDelegate <NSObject>

@optional
- (void)audioSession:(RTCAudioSession *)arg1 failedToSetActive:(_Bool)arg2 error:(NSError *)arg3;
- (void)audioSession:(RTCAudioSession *)arg1 didSetActive:(_Bool)arg2;
- (void)audioSession:(RTCAudioSession *)arg1 willSetActive:(_Bool)arg2;
- (void)audioSession:(RTCAudioSession *)arg1 didDetectPlayoutGlitch:(long long)arg2;
- (void)audioSession:(RTCAudioSession *)arg1 didChangeOutputVolume:(float)arg2;
- (void)audioSessionDidStopPlayOrRecord:(RTCAudioSession *)arg1;
- (void)audioSessionDidStartPlayOrRecord:(RTCAudioSession *)arg1;
- (void)audioSession:(RTCAudioSession *)arg1 didChangeCanPlayOrRecord:(_Bool)arg2;
- (void)audioSessionMediaServerReset:(RTCAudioSession *)arg1;
- (void)audioSessionMediaServerTerminated:(RTCAudioSession *)arg1;
- (void)audioSessionDidChangeRoute:(RTCAudioSession *)arg1 reason:(unsigned long long)arg2 previousRoute:(AVAudioSessionRouteDescription *)arg3;
- (void)audioSessionDidEndInterruption:(RTCAudioSession *)arg1 shouldResumeSession:(_Bool)arg2;
- (void)audioSessionDidBeginInterruption:(RTCAudioSession *)arg1;
@end

