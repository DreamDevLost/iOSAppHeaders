//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, RTCCertificate, RTCCryptoOptions, RTCIntervalRange;

@interface RTCConfiguration : NSObject
{
    _Bool _disableIPV6;
    _Bool _disableIPV6OnWiFi;
    _Bool _disableLinkLocalNetworks;
    _Bool _audioJitterBufferFastAccelerate;
    _Bool _shouldPruneTurnPorts;
    _Bool _shouldPresumeWritableWhenFullyRelayed;
    _Bool _activeResetSrtpParams;
    _Bool _useMediaTransport;
    _Bool _useMediaTransportForDataChannels;
    int _maxIPv6Networks;
    int _audioJitterBufferMaxPackets;
    int _iceConnectionReceivingTimeout;
    int _iceBackupCandidatePairPingInterval;
    int _iceCandidatePoolSize;
    int _rtcpAudioReportIntervalMs;
    int _rtcpVideoReportIntervalMs;
    NSArray *_iceServers;
    RTCCertificate *_certificate;
    long long _iceTransportPolicy;
    long long _bundlePolicy;
    long long _rtcpMuxPolicy;
    long long _tcpCandidatePolicy;
    long long _candidateNetworkPolicy;
    long long _continualGatheringPolicy;
    long long _keyType;
    NSNumber *_iceCheckMinInterval;
    RTCIntervalRange *_iceRegatherIntervalRange;
    long long _sdpSemantics;
    struct TurnCustomizer *_turnCustomizer;
    RTCCryptoOptions *_cryptoOptions;
}

+ (id)stringForSdpSemantics:(long long)arg1;
+ (long long)sdpSemanticsForNativeSdpSemantics:(int)arg1;
+ (int)nativeSdpSemanticsForSdpSemantics:(long long)arg1;
+ (int)nativeEncryptionKeyTypeForKeyType:(long long)arg1;
+ (id)stringForContinualGatheringPolicy:(long long)arg1;
+ (long long)continualGatheringPolicyForNativePolicy:(int)arg1;
+ (int)nativeContinualGatheringPolicyForPolicy:(long long)arg1;
+ (id)stringForCandidateNetworkPolicy:(long long)arg1;
+ (long long)candidateNetworkPolicyForNativePolicy:(int)arg1;
+ (id)stringForTcpCandidatePolicy:(long long)arg1;
+ (long long)tcpCandidatePolicyForNativePolicy:(int)arg1;
+ (int)nativeCandidateNetworkPolicyForPolicy:(long long)arg1;
+ (int)nativeTcpCandidatePolicyForPolicy:(long long)arg1;
+ (id)stringForRtcpMuxPolicy:(long long)arg1;
+ (long long)rtcpMuxPolicyForNativePolicy:(int)arg1;
+ (int)nativeRtcpMuxPolicyForPolicy:(long long)arg1;
+ (id)stringForBundlePolicy:(long long)arg1;
+ (long long)bundlePolicyForNativePolicy:(int)arg1;
+ (int)nativeBundlePolicyForPolicy:(long long)arg1;
+ (id)stringForTransportPolicy:(long long)arg1;
+ (long long)transportPolicyForTransportsType:(int)arg1;
+ (int)nativeTransportsTypeForTransportPolicy:(long long)arg1;
@property(nonatomic) int rtcpVideoReportIntervalMs; // @synthesize rtcpVideoReportIntervalMs=_rtcpVideoReportIntervalMs;
@property(nonatomic) int rtcpAudioReportIntervalMs; // @synthesize rtcpAudioReportIntervalMs=_rtcpAudioReportIntervalMs;
@property(retain, nonatomic) RTCCryptoOptions *cryptoOptions; // @synthesize cryptoOptions=_cryptoOptions;
@property(nonatomic) _Bool useMediaTransportForDataChannels; // @synthesize useMediaTransportForDataChannels=_useMediaTransportForDataChannels;
@property(nonatomic) _Bool useMediaTransport; // @synthesize useMediaTransport=_useMediaTransport;
@property(nonatomic) _Bool activeResetSrtpParams; // @synthesize activeResetSrtpParams=_activeResetSrtpParams;
@property(nonatomic) struct TurnCustomizer *turnCustomizer; // @synthesize turnCustomizer=_turnCustomizer;
@property(nonatomic) long long sdpSemantics; // @synthesize sdpSemantics=_sdpSemantics;
@property(retain, nonatomic) RTCIntervalRange *iceRegatherIntervalRange; // @synthesize iceRegatherIntervalRange=_iceRegatherIntervalRange;
@property(copy, nonatomic) NSNumber *iceCheckMinInterval; // @synthesize iceCheckMinInterval=_iceCheckMinInterval;
@property(nonatomic) _Bool shouldPresumeWritableWhenFullyRelayed; // @synthesize shouldPresumeWritableWhenFullyRelayed=_shouldPresumeWritableWhenFullyRelayed;
@property(nonatomic) _Bool shouldPruneTurnPorts; // @synthesize shouldPruneTurnPorts=_shouldPruneTurnPorts;
@property(nonatomic) int iceCandidatePoolSize; // @synthesize iceCandidatePoolSize=_iceCandidatePoolSize;
@property(nonatomic) long long keyType; // @synthesize keyType=_keyType;
@property(nonatomic) int iceBackupCandidatePairPingInterval; // @synthesize iceBackupCandidatePairPingInterval=_iceBackupCandidatePairPingInterval;
@property(nonatomic) int iceConnectionReceivingTimeout; // @synthesize iceConnectionReceivingTimeout=_iceConnectionReceivingTimeout;
@property(nonatomic) _Bool audioJitterBufferFastAccelerate; // @synthesize audioJitterBufferFastAccelerate=_audioJitterBufferFastAccelerate;
@property(nonatomic) int audioJitterBufferMaxPackets; // @synthesize audioJitterBufferMaxPackets=_audioJitterBufferMaxPackets;
@property(nonatomic) _Bool disableLinkLocalNetworks; // @synthesize disableLinkLocalNetworks=_disableLinkLocalNetworks;
@property(nonatomic) int maxIPv6Networks; // @synthesize maxIPv6Networks=_maxIPv6Networks;
@property(nonatomic) _Bool disableIPV6OnWiFi; // @synthesize disableIPV6OnWiFi=_disableIPV6OnWiFi;
@property(nonatomic) _Bool disableIPV6; // @synthesize disableIPV6=_disableIPV6;
@property(nonatomic) long long continualGatheringPolicy; // @synthesize continualGatheringPolicy=_continualGatheringPolicy;
@property(nonatomic) long long candidateNetworkPolicy; // @synthesize candidateNetworkPolicy=_candidateNetworkPolicy;
@property(nonatomic) long long tcpCandidatePolicy; // @synthesize tcpCandidatePolicy=_tcpCandidatePolicy;
@property(nonatomic) long long rtcpMuxPolicy; // @synthesize rtcpMuxPolicy=_rtcpMuxPolicy;
@property(nonatomic) long long bundlePolicy; // @synthesize bundlePolicy=_bundlePolicy;
@property(nonatomic) long long iceTransportPolicy; // @synthesize iceTransportPolicy=_iceTransportPolicy;
@property(retain, nonatomic) RTCCertificate *certificate; // @synthesize certificate=_certificate;
@property(copy, nonatomic) NSArray *iceServers; // @synthesize iceServers=_iceServers;
- (void).cxx_destruct;
- (struct RTCConfiguration *)createNativeConfiguration;
- (id)description;
- (id)initWithNativeConfiguration:(const struct RTCConfiguration *)arg1;
- (id)init;

@end

