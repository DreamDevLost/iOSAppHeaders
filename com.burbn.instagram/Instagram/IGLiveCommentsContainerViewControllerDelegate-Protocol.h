//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLiveCommentModel, IGLiveCommentsContainerViewController, UICollectionViewCell;

@protocol IGLiveCommentsContainerViewControllerDelegate <NSObject>
- (void)commentsContainerViewControllerDidBeginScrolling:(IGLiveCommentsContainerViewController *)arg1;
- (void)commentsContainerViewController:(IGLiveCommentsContainerViewController *)arg1 didReceiveTapOnComment:(IGLiveCommentModel *)arg2 isPinned:(_Bool)arg3 cell:(UICollectionViewCell *)arg4;
- (void)commentsContainerViewController:(IGLiveCommentsContainerViewController *)arg1 didReceiveUnpinTapOnComment:(IGLiveCommentModel *)arg2;
- (void)commentsContainerViewControllerHeightDidChange:(IGLiveCommentsContainerViewController *)arg1;
@end

