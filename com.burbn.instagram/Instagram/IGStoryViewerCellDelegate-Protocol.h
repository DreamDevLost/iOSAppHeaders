//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryViewerCell;

@protocol IGStoryViewerCellDelegate <NSObject>
- (void)storyViewerCellDidTapDirectMessage:(IGStoryViewerCell *)arg1;
- (void)storyViewerCellDidTapMore:(IGStoryViewerCell *)arg1;
- (void)storyViewerCellDidTapAvatar:(IGStoryViewerCell *)arg1;
- (void)storyViewerCellDidTapUnhide:(IGStoryViewerCell *)arg1;
- (void)storyViewerCellDidTapHide:(IGStoryViewerCell *)arg1;
@end
