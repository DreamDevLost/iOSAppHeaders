//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedSectionControllerActionDelegate.h"

@class NSString;

@interface IGGenericSurveyTapCTAContext : NSObject <IGFeedSectionControllerActionDelegate>
{
    id <IGGenericSurveyTapCTAContextDelegate> _receiver;
    _Bool _hasCTATapped;
}

@property(nonatomic) _Bool hasCTATapped; // @synthesize hasCTATapped=_hasCTATapped;
- (void).cxx_destruct;
- (void)feedSectionController:(id)arg1 showRelatedPostsForFeedItem:(id)arg2;
- (void)feedSectionControllerDidTapDismissButton:(id)arg1;
- (void)feedSectionController:(id)arg1 didLikeFeedItem:(id)arg2 mediaView:(id)arg3;
- (void)feedSectionControllerDidDismissFeedItem:(id)arg1;
- (_Bool)feedSectionControllerShouldExpandFeedItemOnMoreTapped:(id)arg1;
- (_Bool)feedSectionController:(id)arg1 shouldNavigateToCommentsWithEntryPoint:(long long)arg2;
- (void)feedSectionController:(id)arg1 didUnfollowHashtag:(id)arg2;
- (void)feedSectionControllerDidTapOverflowButton:(id)arg1;
- (void)feedSectionController:(id)arg1 changedMuteStatusForUser:(id)arg2 changedPostsMuteStatus:(_Bool)arg3 changedStoryMuteStatus:(_Bool)arg4;
- (void)feedSectionController:(id)arg1 didUnfollowUser:(id)arg2;
- (void)feedSectionControllerDidSwipePageCell:(id)arg1 toIndex:(long long)arg2;
- (void)feedSectionControllerDidTapCommentEntryPoint:(id)arg1 replyText:(id)arg2;
- (void)feedSectionControllerDidTapCustomizableButton:(id)arg1;
- (void)setReceiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

