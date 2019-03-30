//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedItemVideoViewDelegate.h"
#import "IGFeedMediaPreviewController.h"

@class IGFNFVideoPlayer, IGFeedItem, IGFeedItemVideoView, IGFeedMediaPreviewContext, IGPostItem, IGVideoPlaybackController, NSDictionary, NSString, UIView;

@interface IGFeedVideoPreviewController : NSObject <IGFeedItemVideoViewDelegate, IGFeedMediaPreviewController>
{
    IGFeedItem *_feedItem;
    IGFeedMediaPreviewContext *_previewContext;
    IGVideoPlaybackController *_videoPlaybackController;
    IGFNFVideoPlayer *_videoPlayer;
    IGPostItem *_videoPostItem;
    IGFeedItemVideoView *_videoView;
    NSString *_module;
    NSString *_sessionId;
    NSDictionary *_loggingExtras;
}

+ (id)previewControllerWithFeedItem:(id)arg1 previewContext:(id)arg2 module:(id)arg3 userSession:(id)arg4 loggingExtras:(id)arg5;
+ (_Bool)canPreviewFeedItem:(id)arg1;
- (void).cxx_destruct;
- (void)feedItemVideoView:(id)arg1 didFailLoadImageWithError:(id)arg2;
- (void)feedItemVideoViewDidLoadImage:(id)arg1;
- (void)_deallocateVideoPlayerWithReason:(long long)arg1;
- (void)didLoseFocus;
- (void)willLoseFocus;
- (void)didGainFocus;
- (void)willGainFocus;
- (void)_generateVideoViewIfNecessary;
@property(readonly, nonatomic) UIView *mediaView;
- (void)dealloc;
- (id)initWithVideoPostItem:(id)arg1 feedItem:(id)arg2 previewContext:(id)arg3 module:(id)arg4 loggingExtras:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

