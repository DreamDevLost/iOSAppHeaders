//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAREffectApplicationListener.h"
#import "IGAREffectAvailabilityListener.h"
#import "IGARInstructionServiceDelegate.h"

@class IGCameraViewController;

@protocol IGCameraViewControllerAREffectDelegate <IGAREffectAvailabilityListener, IGARInstructionServiceDelegate, IGAREffectApplicationListener>
- (void)cameraViewControllerIsReadyToProcessNewAREffect:(IGCameraViewController *)arg1;
@end

