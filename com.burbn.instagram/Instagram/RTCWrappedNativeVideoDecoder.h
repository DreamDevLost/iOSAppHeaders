//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RTCVideoDecoder.h"

@class NSString;

@interface RTCWrappedNativeVideoDecoder : NSObject <RTCVideoDecoder>
{
    unique_ptr_28850a1b _wrappedDecoder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)implementationName;
- (long long)decode:(id)arg1 missingFrames:(_Bool)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4;
- (long long)releaseDecoder;
- (long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (long long)startDecodeWithNumberOfCores:(int)arg1;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (unique_ptr_28850a1b)releaseWrappedDecoder;
- (id)initWithNativeDecoder:(unique_ptr_28850a1b)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

