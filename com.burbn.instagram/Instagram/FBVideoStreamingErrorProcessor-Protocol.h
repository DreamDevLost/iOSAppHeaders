//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol FBVideoStreamingErrorProcessor <NSObject>
- (void)droppedPackets:(shared_ptr_3f407d03)arg1 withReason:(NSString *)arg2;
- (void)processError:(NSError *)arg1;
@end

