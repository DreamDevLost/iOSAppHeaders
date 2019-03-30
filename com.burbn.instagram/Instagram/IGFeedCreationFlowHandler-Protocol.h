//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCaptureFlowViewModel, IGMediaMetadata, NSString;

@protocol IGFeedCreationFlowHandler <NSObject>
- (_Bool)isUserInFeedCreationFlow;
- (void)presentShareMediaOptionsWithMediaMetadata:(IGMediaMetadata *)arg1;
- (void)presentCameraWithMetadata:(IGMediaMetadata *)arg1 captureFlowViewModel:(IGCaptureFlowViewModel *)arg2 mode:(long long)arg3 existingWaterfallEventName:(NSString *)arg4 animated:(_Bool)arg5;
- (void)presentCameraWithMetadata:(IGMediaMetadata *)arg1 captureFlowViewModel:(IGCaptureFlowViewModel *)arg2 mode:(long long)arg3;
@end
