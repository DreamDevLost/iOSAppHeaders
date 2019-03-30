//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAudioSessionClientConfig, IGAudioSessionManager;

@interface IGAudioSessionClient : NSObject
{
    IGAudioSessionManager *_audioSessionManager;
    IGAudioSessionClientConfig *_config;
    id <IGAudioSessionClientDelegate> _delegate;
}

+ (id)newInEarPlaybackAudioClient;
+ (id)newLiveAudioClient;
+ (id)newVideoCallAudioClient;
+ (id)newAudioRecordingClient;
+ (id)newRecordingClient;
+ (id)newExclusiveClient;
@property(nonatomic) __weak id <IGAudioSessionClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGAudioSessionClientConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)webRTCClientDeactivated;
- (void)webRTCClientDidBecomeActive;
- (void)deactivateClient;
- (void)activateClientWithError:(id *)arg1;
- (id)initWithAudioSessionManager:(id)arg1 config:(id)arg2;

@end

