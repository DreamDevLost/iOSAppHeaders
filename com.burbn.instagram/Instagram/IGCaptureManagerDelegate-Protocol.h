//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol IGCaptureManagerDelegate <NSObject>
- (_Bool)captureManagerCanTakeFusionCapture:(id <IGCaptureManaging>)arg1;
- (void)captureManagerDidChangeFlashAvailability:(id <IGCaptureManaging>)arg1;
- (void)captureManagerIsReadyToProcessNewAREffect;
- (void)captureManagerDidReceiveUnhandledError:(NSError *)arg1;
- (void)captureManagerNeedsResume:(_Bool)arg1;
- (void)captureManagerDidSatisfyFocusRequest;
- (void)captureManagerWillTakePhoto;
@end

