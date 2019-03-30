//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDevice;

@interface FBCaptureLowLightDetector : NSObject
{
    AVCaptureDevice *_device;
    id <FBCancelable> _holdoutCancelable;
    long long _lightModeCondition;
    struct mutex _mutex;
    float _detectionThreshold;
    id <FBCaptureLowLightDetectorDelegate> _delegate;
}

@property(nonatomic) float detectionThreshold; // @synthesize detectionThreshold=_detectionThreshold;
@property(nonatomic) __weak id <FBCaptureLowLightDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingDevice:(id)arg1;
- (void)_observeISOValueOfDevice:(id)arg1;
- (void)detectLowLightForDevice:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

