//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBCaptureCoordinatorBaseGestureDelegate.h"

@class FBCaptureCoordinatorBase, FBMPTapGestureData, UITapGestureRecognizer, UIView;

@protocol FBCaptureCoordinatorBaseTapGestureDelegate <FBCaptureCoordinatorBaseGestureDelegate>
- (void)captureCoordinator:(FBCaptureCoordinatorBase *)arg1 didProduceTapGestureData:(FBMPTapGestureData *)arg2 fromCaptureView:(UIView *)arg3;
- (_Bool)captureCoordinator:(FBCaptureCoordinatorBase *)arg1 shouldProduceTapGestureDataFromTapGestureRecognizer:(UITapGestureRecognizer *)arg2;
@end
