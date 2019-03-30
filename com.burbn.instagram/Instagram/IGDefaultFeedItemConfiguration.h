//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedItemConfigurationType.h"

@class IGUserSession, NSString;

@interface IGDefaultFeedItemConfiguration : NSObject <IGFeedItemConfigurationType>
{
    IGUserSession *_userSession;
    id <IGFeedTheme> _theme;
}

@property(readonly, nonatomic) id <IGFeedTheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (_Bool)enableMediaPreviewOnlyForFeedItem:(id)arg1;
- (id)ctaPresenterContext;
- (id)headerTheme;
- (_Bool)shouldShowCTAIfApplicableForFeedItem:(id)arg1;
- (_Bool)shouldShowShoppingShelfForFeedItem:(id)arg1;
- (_Bool)shouldSentenceCaseCombinedContextText;
- (_Bool)shouldShowAuthorInTitleForHashtagFeedItem:(id)arg1;
- (id)followControllerContextStringForFeedItem:(id)arg1;
- (_Bool)shouldShowLoadingIndicatorForFeedItem:(id)arg1;
- (_Bool)unseenIndicatorEnabledForFeedItem:(id)arg1;
- (unsigned long long)externalShareLocationForFeedItem:(id)arg1;
- (_Bool)commentEnabledForFeedItem:(id)arg1;
- (_Bool)sendEnabledForFeedItem:(id)arg1;
- (_Bool)likeEnabledForFeedItem:(id)arg1;
- (_Bool)saveEnabledForFeedItem:(id)arg1;
- (unsigned long long)carouselStartingIndex:(id)arg1;
- (_Bool)supportCarouselIndicatorAnimation;
- (_Bool)isMainFeedCarouselBumpedUnit:(id)arg1;
- (_Bool)shouldRenderAsExploreInFeedUnit:(id)arg1;
- (_Bool)shouldShowInlineComposerForFeedItem:(id)arg1;
- (id)commentDraftDataController;
- (_Bool)favoritesButtonEnabledWhenAvailable;
- (_Bool)isPermalinkView;
- (_Bool)shouldUseProfilePhotoForTitleForFeedItem:(id)arg1;
- (_Bool)showVerifiedBadge;
- (id)actionSheetConfigurationForFeedItem:(id)arg1 entryPoint:(unsigned long long)arg2;
- (_Bool)shouldPopAfterDeletingFeedItem:(id)arg1;
- (_Bool)shouldShowInlineInsightsForFeedItem:(id)arg1;
- (id)likeRequestParametersForFeedItem:(id)arg1;
- (_Bool)shouldMoreSupersedeCustomizableButtonForFeedItem:(id)arg1;
- (_Bool)allowHidingSponsoredItem;
- (_Bool)showDismissButtonOnFeedItemHeaderForFeedItem:(id)arg1;
- (_Bool)allowSFPLTFromFeedItem:(id)arg1;
- (long long)hiddenCellTypeForFeedItem:(id)arg1;
- (CDStruct_ce671a2f)captionDisplayOptionsForFeedItem:(id)arg1;
- (_Bool)shouldHideFeedItem:(id)arg1;
- (_Bool)shouldHideMoreCommentsButton;
- (_Bool)shouldShowLikeCountFacepileForFeedItem:(id)arg1;
- (_Bool)shouldShowPreviewCommentLikeButton;
- (_Bool)shouldDisablePreviewComments;
- (_Bool)showExploreContextForFeedItem:(id)arg1;
- (_Bool)shouldHideSponsoredLabelForSponsoredItem;
- (_Bool)shouldShowSponsoredLabelOnly;
- (_Bool)allowSponsoredContextForFeedItem:(id)arg1;
- (_Bool)showFollowButtonForFeedItem:(id)arg1;
- (_Bool)shouldShowDisclaimerForFeedItem:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

