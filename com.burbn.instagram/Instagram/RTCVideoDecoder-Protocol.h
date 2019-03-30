//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RTCEncodedImage, RTCVideoEncoderSettings;

@protocol RTCVideoDecoder <NSObject>
- (NSString *)implementationName;
- (long long)decode:(RTCEncodedImage *)arg1 missingFrames:(_Bool)arg2 codecSpecificInfo:(id <RTCCodecSpecificInfo>)arg3 renderTimeMs:(long long)arg4;
- (long long)releaseDecoder;
- (long long)startDecodeWithSettings:(RTCVideoEncoderSettings *)arg1 numberOfCores:(int)arg2;
- (void)setCallback:(void (^)(RTCVideoFrame *))arg1;

@optional
- (long long)startDecodeWithNumberOfCores:(int)arg1;
@end

