//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBCameraCaptureFrameDropListener.h"

@class NSString;

@interface FBCameraCaptureFrameDropListenerAnnouncer : FBAnnouncerBase <FBCameraCaptureFrameDropListener>
{
}

- (void)cameraCaptureControllerDidDropVideoFrameAtPresentationTime:(CDStruct_1b6d18a9)arg1 withReason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

