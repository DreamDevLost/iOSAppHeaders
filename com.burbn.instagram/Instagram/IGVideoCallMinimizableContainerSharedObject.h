//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGVideoCallCaptureCoordinator, IGVideoCallGroupVideoContainerView;

@interface IGVideoCallMinimizableContainerSharedObject : NSObject
{
    IGVideoCallCaptureCoordinator *_captureCoordinator;
    IGVideoCallGroupVideoContainerView *_groupVideoView;
}

@property(readonly, nonatomic) IGVideoCallGroupVideoContainerView *groupVideoView; // @synthesize groupVideoView=_groupVideoView;
@property(readonly, nonatomic) IGVideoCallCaptureCoordinator *captureCoordinator; // @synthesize captureCoordinator=_captureCoordinator;
- (void).cxx_destruct;
- (id)initWithCaptureCoordinator:(id)arg1 groupVideoView:(id)arg2;

@end

