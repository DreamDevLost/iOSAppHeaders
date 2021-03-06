//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RTCRtpSender.h"

@class NSString, RTCMediaStreamTrack, RTCPeerConnectionFactory, RTCRtpParameters;

@interface RTCRtpSender : NSObject <RTCRtpSender>
{
    RTCPeerConnectionFactory *_factory;
    scoped_refptr_3635276f _nativeRtpSender;
    id <RTCDtmfSender> _dtmfSender;
}

@property(readonly, nonatomic) id <RTCDtmfSender> dtmfSender; // @synthesize dtmfSender=_dtmfSender;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFactory:(id)arg1 nativeRtpSender:(scoped_refptr_3635276f)arg2;
@property(readonly, nonatomic) scoped_refptr_3635276f nativeRtpSender;
- (void)setFrameEncryptor:(scoped_refptr_01237151)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) RTCMediaStreamTrack *track;
@property(copy, nonatomic) RTCRtpParameters *parameters;
@property(readonly, nonatomic) NSString *senderId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

