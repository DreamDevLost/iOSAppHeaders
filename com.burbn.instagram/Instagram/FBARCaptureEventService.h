//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBARCaptureEventService : NSObject
{
    struct shared_ptr<facebook::arservices::apple::CaptureEventInput> _eventInput;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) shared_ptr_1579b2d5 eventService;
@property(readonly, nonatomic) shared_ptr_bd589161 eventInput;
- (void)notifyCaptureEventOfType:(unsigned char)arg1;
- (void)notifyCameraInfoPreviewInfoChanged:(const struct CameraPreviewInfo *)arg1;
- (void)notifyCameraInfoVideoInfoChanged:(const struct CameraVideoInfo *)arg1;
- (void)notifyCameraInfoChanged:(struct FBARCaptureEventServiceCameraInfo)arg1;
- (id)init;

@end

