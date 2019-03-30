//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, IGGLVVideoPlayer;

@protocol IGGLVVideoPlayerDelegate <NSObject>
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 didLoadPixelBuffer:(struct __CVBuffer *)arg2 forTime:(CDStruct_1b6d18a9)arg3 fromAsset:(AVAsset *)arg4;

@optional
- (void)videoPlayerDidPlayToEnd:(IGGLVVideoPlayer *)arg1;
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 didResumePlayingAsset:(AVAsset *)arg2;
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 didStallWhilePlayingAsset:(AVAsset *)arg2;
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 didFailToLoadAsset:(AVAsset *)arg2;
- (void)videoPlayer:(IGGLVVideoPlayer *)arg1 didLoadAsset:(AVAsset *)arg2;
- (struct CGSize)videoPlayer:(IGGLVVideoPlayer *)arg1 sizeOfPixelBufferForAsset:(AVAsset *)arg2;
@end

