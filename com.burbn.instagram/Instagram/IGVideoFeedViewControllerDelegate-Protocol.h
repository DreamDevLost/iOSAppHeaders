//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGVideoFeedViewController, IGVideoPlaybackItem;

@protocol IGVideoFeedViewControllerDelegate <NSObject>
- (void)videoFeedViewController:(IGVideoFeedViewController *)arg1 didBeginPlayingItem:(IGVideoPlaybackItem *)arg2;
- (void)videoFeedViewControllerWasDismissed:(IGVideoFeedViewController *)arg1;
- (void)videoFeedViewController:(IGVideoFeedViewController *)arg1 willDismissWithFocusedFeedItem:(IGFeedItem *)arg2 currentPlaybackTime:(double)arg3;
@end

