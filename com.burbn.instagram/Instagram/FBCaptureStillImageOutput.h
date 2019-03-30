//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCaptureOutput.h"

@class AVCaptureStillImageOutput, NSString;

@interface FBCaptureStillImageOutput : NSObject <FBCaptureOutput>
{
    AVCaptureStillImageOutput *_stillImageOutput;
}

@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
- (void).cxx_destruct;
@property(nonatomic) unsigned int pixelFormat;
- (void)configureOutputForCurrentConnection;
- (void)captureWithAction:(id)arg1 shouldMirrorImage:(_Bool)arg2 flashMode:(long long)arg3 currentDevicePosition:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)captureConnection;
- (id)captureOutput;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

