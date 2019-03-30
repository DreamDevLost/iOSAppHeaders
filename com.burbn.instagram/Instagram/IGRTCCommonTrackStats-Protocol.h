//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IGRTCCommonTrackStats <NSObject>
- (NSString *)captureStartNtpTimeMs;
- (NSString *)totalSamplesDuration;
- (NSString *)RTT;
- (NSString *)trackId;
- (NSString *)currentDelayMs;
- (NSString *)jitterBufferMs;
- (NSString *)codecName;
- (NSString *)packetsSent;
- (NSString *)packetsReceived;
- (NSString *)packetsLost;
- (NSString *)bytesReceived;
- (NSString *)bytesSent;
@end

