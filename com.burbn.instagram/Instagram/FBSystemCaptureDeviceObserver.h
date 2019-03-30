//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDevice, NSMutableSet;

@interface FBSystemCaptureDeviceObserver : NSObject
{
    struct mutex _callbackMutex;
    NSMutableSet *_callbacks;
    _Bool _captureDeviceAdjusting;
    AVCaptureDevice *_observedCaptureDevice;
}

@property(readonly, nonatomic, getter=isCaptureDeviceAdjusting) _Bool captureDeviceAdjusting; // @synthesize captureDeviceAdjusting=_captureDeviceAdjusting;
@property(retain, nonatomic) AVCaptureDevice *observedCaptureDevice; // @synthesize observedCaptureDevice=_observedCaptureDevice;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dispatchCallbacks:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingCaptureDevice;
- (void)_startObservingCaptureDevice;
- (void)addCaptureDeviceAdjustingFinishedCallback:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
