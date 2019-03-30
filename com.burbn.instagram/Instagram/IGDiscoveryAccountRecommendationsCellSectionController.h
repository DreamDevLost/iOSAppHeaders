//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGDiscoveryAccountRecommendationsCellCollectionViewCellDelegate.h"
#import "IGListWorkingRangeDelegate.h"

@class IGSuggestedUserInfo, IGUserSession, NSString;

@interface IGDiscoveryAccountRecommendationsCellSectionController : IGListSectionController <IGListWorkingRangeDelegate, IGDiscoveryAccountRecommendationsCellCollectionViewCellDelegate>
{
    IGUserSession *_userSession;
    id <IGDiscoveryAccountRecommendationsSectionControllerLoggingProvider> _loggingProvider;
    IGSuggestedUserInfo *_suggestedUserInfo;
    _Bool _showDismissButton;
    id <IGDiscoveryAccountRecommendationsCellSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDiscoveryAccountRecommendationsCellSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accountRecommendationsCell:(id)arg1 forFeedItem:(id)arg2 didFailLoadImageWithError:(id)arg3 networkRequestSummary:(id)arg4;
- (void)accountRecommendationsCell:(id)arg1 forFeedItem:(id)arg2 didLoadImage:(id)arg3 source:(id)arg4 networkRequestSummary:(id)arg5;
- (void)accountRecommendationsCell:(id)arg1 didTapFollowButtonOnSuggestedUser:(id)arg2 userAction:(long long)arg3;
- (void)accountRecommendationsCell:(id)arg1 didTapOnSuggestedUser:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 loggingProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
