//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGVideoProcessorControllerDelegate.h"

@class NSObject<OS_dispatch_queue>;

@protocol IGVideoCapturing <IGVideoProcessorControllerDelegate>
@property(retain, nonatomic) id <IGVideoProcessorControlling> videoProcessorController;
- (NSObject<OS_dispatch_queue> *)audioBufferQueue;
- (NSObject<OS_dispatch_queue> *)videoBufferQueue;
@end

