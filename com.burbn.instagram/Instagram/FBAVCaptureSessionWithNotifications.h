//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVCaptureSession.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBAVCaptureSessionWithNotifications : AVCaptureSession
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_logname;
}

@property(readonly, copy, nonatomic) NSString *logname; // @synthesize logname=_logname;
- (void).cxx_destruct;
- (void)removeInput:(id)arg1;
- (void)addInput:(id)arg1;
- (id)initWithLogname:(id)arg1;

@end

