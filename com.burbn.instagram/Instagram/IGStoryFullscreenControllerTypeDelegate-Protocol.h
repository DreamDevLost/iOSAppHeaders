//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGHighlightCoverModel, IGStoryViewerViewModel, IGUser, NSSet, NSString;

@protocol IGStoryFullscreenControllerTypeDelegate <NSObject>
- (_Bool)fullscreenSectionControllerIsTransitioning:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionControllerDidEndDisplaying:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didRemoveSuggestedHighlightWithPK:(NSString *)arg2;
- (void)fullscreenSectionControllerDidEditSuggestedHighlight:(id <IGStoryFullscreenControllerType>)arg1 addedItems:(NSSet *)arg2 removedItems:(NSSet *)arg3 title:(NSString *)arg4 coverModel:(IGHighlightCoverModel *)arg5;
- (void)fullscreenSectionControllerDidPublishSuggestedHighlight:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionControllerMediaViewDidPlayToEnd;
- (void)fullscreenSectionControllerDidDismissFullscreenNux:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionControllerDidDisplayFullscreenNux:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionControllerDidTapProfile:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 wantsNavToPivotWithType:(long long)arg2;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didReplaceSponsorPartner:(IGUser *)arg2 newUser:(IGUser *)arg3;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didRemoveSponsorPartner:(IGUser *)arg2;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didAddSponsorPartner:(IGUser *)arg2;
- (void)fullscreenSectionControllerDidTapEmptyStoryBadge:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didWantToSeeFewerStoriesLikeThis:(IGStoryViewerViewModel *)arg2;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didMarkStoryViewModelAsHidden:(IGStoryViewerViewModel *)arg2;
- (void)fullscreenSectionControllerDidTapStartLiveVideoButton:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionControllerDidTapRetry:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionControllerDidLongPress:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionControllerDidTapDismiss:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didRewindPastFirstItemWithNavigationAction:(long long)arg2;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didAdvancePastLastItemWithNavigationAction:(long long)arg2;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didMarkItemAsSeen:(id <IGStoryItemType>)arg2;
- (_Bool)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 shouldDisplayGestureNuxAtStoryItem:(id <IGStoryItemType>)arg2 story:(IGStoryViewerViewModel *)arg3;
- (_Bool)fullscreenSectionControllerCanResumePlayback:(id <IGStoryFullscreenControllerType>)arg1;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didStartToProgressWithStoryItem:(id <IGStoryItemType>)arg2;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didNavFromStoryItem:(id <IGStoryItemType>)arg2 toStoryItem:(id <IGStoryItemType>)arg3 story:(IGStoryViewerViewModel *)arg4 navAction:(long long)arg5;
- (void)fullscreenSectionController:(id <IGStoryFullscreenControllerType>)arg1 didUpdateFromStoryModel:(IGStoryViewerViewModel *)arg2 toStoryModel:(IGStoryViewerViewModel *)arg3 storyItem:(id <IGStoryItemType>)arg4;
@end

