//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCCPlaybackControllerDelegate.h"
#import "IGPostCaptureARControllerPixelBufferListener.h"
#import "IGStoryPreviewPlaybackControlling.h"

@class IGVideoComposition, NSString;

@interface IGARStoryPreviewPlaybackController : NSObject <FBCCPlaybackControllerDelegate, IGStoryPreviewPlaybackControlling, IGPostCaptureARControllerPixelBufferListener>
{
    id <FBCCPlaybackControlling> _playbackController;
    IGVideoComposition *_video;
    CDUnknownBlockType _handler;
    _Bool _didStartToPlay;
    _Bool _isRewinding;
    CDStruct_1b6d18a9 _previousAdjustedTime;
    id <IGStoryPreviewPlaybackControllerDelegate> _storyPreviewPlaybackDelegate;
}

@property(nonatomic) __weak id <IGStoryPreviewPlaybackControllerDelegate> storyPreviewPlaybackDelegate; // @synthesize storyPreviewPlaybackDelegate=_storyPreviewPlaybackDelegate;
- (void).cxx_destruct;
- (void)controllerDidPlayToEnd:(id)arg1;
- (void)controller:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)controller:(id)arg1 didPresentSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (_Bool)_isReversed;
@property(nonatomic) _Bool muted;
- (void)registerPixelBufferHandler:(CDUnknownBlockType)arg1;
- (void)setDebugStabilization:(_Bool)arg1;
- (CDStruct_1b6d18a9)startTime;
- (CDStruct_1b6d18a9)currentTime;
- (double)progress;
- (void)seekToPosition:(double)arg1;
- (void)rewindToStart;
- (void)playFromStart;
- (void)stop;
- (void)play;
- (id)initWithPlaybackController:(id)arg1 video:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

