//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureConnection, AVCaptureVideoDataOutput;

@interface IGCaptureVideoDataOutput : NSObject
{
    _Bool _alwaysDiscardsLateVideoFrames;
    AVCaptureVideoDataOutput *_systemOutput;
}

@property(nonatomic) _Bool alwaysDiscardsLateVideoFrames; // @synthesize alwaysDiscardsLateVideoFrames=_alwaysDiscardsLateVideoFrames;
@property(readonly, nonatomic) AVCaptureVideoDataOutput *systemOutput; // @synthesize systemOutput=_systemOutput;
- (void).cxx_destruct;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (id)connectionWithMediaType:(id)arg1;
@property(readonly, nonatomic) AVCaptureConnection *systemCaptureConnection;
- (id)initWithVideoSettings:(id)arg1;

@end

