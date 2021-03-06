//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer<FNFPlayerDisplayEngine>, NSObject<OS_dispatch_queue>;

@interface IGVideoPlayerDisplayedFrameGenerator : NSObject
{
    CALayer<FNFPlayerDisplayEngine> *_displayEngine;
    NSObject<OS_dispatch_queue> *_renderFrameQueue;
    id <IGExperimentSetProviding> _experimentSetProvider;
}

- (void).cxx_destruct;
- (id)_context;
- (id)_renderFrameQueue;
- (void)currentFrameWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDisplayEngine:(id)arg1 experimentProvider:(id)arg2;

@end

