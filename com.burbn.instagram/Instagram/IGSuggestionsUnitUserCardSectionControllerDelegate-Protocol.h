//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGFeaturedUserInfo, IGSuggestionsUnitUserCardSectionController;

@protocol IGSuggestionsUnitUserCardSectionControllerDelegate
- (void)userCardSectionControllerDidSelectCell:(IGSuggestionsUnitUserCardSectionController *)arg1 suggestionsUser:(IGFeaturedUserInfo *)arg2;
- (void)userCardSectionControllerDidTapFollowButton:(IGSuggestionsUnitUserCardSectionController *)arg1 suggestionsUser:(IGFeaturedUserInfo *)arg2 userAction:(long long)arg3;
- (void)userCardSectionController:(IGSuggestionsUnitUserCardSectionController *)arg1 didDismissSuggestedUser:(IGFeaturedUserInfo *)arg2;
@end

