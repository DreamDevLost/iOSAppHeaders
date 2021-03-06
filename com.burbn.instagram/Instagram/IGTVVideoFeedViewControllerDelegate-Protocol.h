//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGTVVideoFeedViewController, IGUser;

@protocol IGTVVideoFeedViewControllerDelegate <NSObject>
- (_Bool)tvVideoFeedCanAutoAdvance:(IGTVVideoFeedViewController *)arg1;
- (_Bool)tvVideoFeedCanResumePlayback:(IGTVVideoFeedViewController *)arg1;
- (void)tvVideoFeed:(IGTVVideoFeedViewController *)arg1 didTapUser:(IGUser *)arg2 forFeedItem:(IGFeedItem *)arg3;
- (void)tvVideoFeed:(IGTVVideoFeedViewController *)arg1 didFocusFeedItem:(IGFeedItem *)arg2;
- (void)tvVideoFeed:(IGTVVideoFeedViewController *)arg1 didTapOverflowForFeedItem:(IGFeedItem *)arg2;
- (void)tvVideoFeed:(IGTVVideoFeedViewController *)arg1 didTapDirectForFeedItem:(IGFeedItem *)arg2;
- (void)tvVideoFeed:(IGTVVideoFeedViewController *)arg1 didTapViewsForFeedItem:(IGFeedItem *)arg2;
- (void)tvVideoFeed:(IGTVVideoFeedViewController *)arg1 didTapCommentsForFeedItem:(IGFeedItem *)arg2;
- (void)tvVideoFeedDidTapOpenTVGuide:(IGTVVideoFeedViewController *)arg1;
- (void)tvVideoFeedDidTapMinimize:(IGTVVideoFeedViewController *)arg1;
- (void)tvVideoFeedDidTapClose:(IGTVVideoFeedViewController *)arg1;
@end

