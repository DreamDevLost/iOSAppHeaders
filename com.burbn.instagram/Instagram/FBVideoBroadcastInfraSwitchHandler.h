//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoBroadcastSwitchableSessionDelegateShimDelegate.h"

@class FBTimer, NSDate;

@interface FBVideoBroadcastInfraSwitchHandler : NSObject <FBVideoBroadcastSwitchableSessionDelegateShimDelegate>
{
    unsigned long long _swapType;
    NSDate *_swapStartTimestamp;
    FBTimer *_swapBackTimeoutTimer;
    id <FBVideoBroadcastRtmpSession> _rtmpSession;
    id <FBVideoBroadcastRTCSession> _rtcSession;
    id <FBVideoBroadcastSessionDelegate><FBVideoBroadcastSessionLiveWithDelegate> _postSwapRTCSessionDelegate;
    _Bool _skipFlushDuringSwap;
    id <FBVideoStreamingLiveSwapLoggerProtocol> _logger;
    CDUnknownBlockType _completion;
    id <FBVideoBroadcastSwitchableSessionDelegateShim> _delegateShim;
}

- (void).cxx_destruct;
- (void)broadcastSessionDidFail:(id)arg1 withLoggingInfo:(struct FBVideoBroadcastSessionLoggingInfo)arg2;
- (void)broadcastSessionFailedToConnectWithResult:(struct FBVideoBroadcastSessionLoggingInfo)arg1;
- (void)broadcastSessionDidConnect;
- (void)_swapToRTMPTimeoutExceeded;
- (void)_swapToRTMPSessionDidConnect;
- (void)_swapToRTCSessionDidConnect;
- (_Bool)switchFromRTCToRTMP:(CDUnknownBlockType)arg1 withTimeout:(unsigned long long)arg2;
- (void)abortSwitchIfInProgress;
- (void)switchFromRTMPToRTC:(CDUnknownBlockType)arg1;
- (id)initWithRTMPSession:(id)arg1 webRTCSession:(id)arg2 postSwapRTCSessionDelegate:(id)arg3 skipFlushDuringSwap:(_Bool)arg4 logger:(id)arg5 sessionDelegateShim:(id)arg6;

@end

