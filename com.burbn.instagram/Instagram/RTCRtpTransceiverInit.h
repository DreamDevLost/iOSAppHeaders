//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface RTCRtpTransceiverInit : NSObject
{
    long long _direction;
    NSArray *_streamIds;
    NSArray *_sendEncodings;
}

@property(retain, nonatomic) NSArray *sendEncodings; // @synthesize sendEncodings=_sendEncodings;
@property(retain, nonatomic) NSArray *streamIds; // @synthesize streamIds=_streamIds;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct RtpTransceiverInit nativeInit;
- (id)init;

@end

