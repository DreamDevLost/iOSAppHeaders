//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGActionSheetConfiguration, IGCTAPresenterContext, IGCommentDraftDataController, IGFeedItem, IGUserSession, NSDictionary, NSString;

@protocol IGFeedItemConfigurationType <NSObject>
+ (id)new;
- (_Bool)enableMediaPreviewOnlyForFeedItem:(IGFeedItem *)arg1;
- (_Bool)shouldShowCTAIfApplicableForFeedItem:(IGFeedItem *)arg1;
- (_Bool)shouldShowShoppingShelfForFeedItem:(IGFeedItem *)arg1;
- (_Bool)shouldShowLoadingIndicatorForFeedItem:(IGFeedItem *)arg1;
- (_Bool)unseenIndicatorEnabledForFeedItem:(IGFeedItem *)arg1;
- (unsigned long long)externalShareLocationForFeedItem:(IGFeedItem *)arg1;
- (_Bool)commentEnabledForFeedItem:(IGFeedItem *)arg1;
- (_Bool)likeEnabledForFeedItem:(IGFeedItem *)arg1;
- (_Bool)sendEnabledForFeedItem:(IGFeedItem *)arg1;
- (_Bool)saveEnabledForFeedItem:(IGFeedItem *)arg1;
- (NSString *)followControllerContextStringForFeedItem:(IGFeedItem *)arg1;
- (IGCTAPresenterContext *)ctaPresenterContext;
- (_Bool)shouldSentenceCaseCombinedContextText;
- (_Bool)shouldShowAuthorInTitleForHashtagFeedItem:(IGFeedItem *)arg1;
- (unsigned long long)carouselStartingIndex:(IGFeedItem *)arg1;
- (_Bool)supportCarouselIndicatorAnimation;
- (_Bool)isMainFeedCarouselBumpedUnit:(IGFeedItem *)arg1;
- (_Bool)shouldRenderAsExploreInFeedUnit:(IGFeedItem *)arg1;
- (_Bool)shouldShowInlineComposerForFeedItem:(IGFeedItem *)arg1;
- (IGCommentDraftDataController *)commentDraftDataController;
- (_Bool)favoritesButtonEnabledWhenAvailable;
- (_Bool)isPermalinkView;
- (_Bool)shouldUseProfilePhotoForTitleForFeedItem:(IGFeedItem *)arg1;
- (_Bool)showVerifiedBadge;
- (id <IGFeedTheme>)headerTheme;
- (id <IGFeedTheme>)theme;
- (IGActionSheetConfiguration *)actionSheetConfigurationForFeedItem:(IGFeedItem *)arg1 entryPoint:(unsigned long long)arg2;
- (_Bool)shouldPopAfterDeletingFeedItem:(IGFeedItem *)arg1;
- (_Bool)shouldShowInlineInsightsForFeedItem:(IGFeedItem *)arg1;
- (NSDictionary *)likeRequestParametersForFeedItem:(IGFeedItem *)arg1;
- (_Bool)shouldMoreSupersedeCustomizableButtonForFeedItem:(IGFeedItem *)arg1;
- (_Bool)allowHidingSponsoredItem;
- (_Bool)showDismissButtonOnFeedItemHeaderForFeedItem:(IGFeedItem *)arg1;
- (_Bool)allowSFPLTFromFeedItem:(IGFeedItem *)arg1;
- (long long)hiddenCellTypeForFeedItem:(IGFeedItem *)arg1;
- (CDStruct_ce671a2f)captionDisplayOptionsForFeedItem:(IGFeedItem *)arg1;
- (_Bool)shouldHideFeedItem:(IGFeedItem *)arg1;
- (_Bool)shouldHideMoreCommentsButton;
- (_Bool)shouldShowLikeCountFacepileForFeedItem:(IGFeedItem *)arg1;
- (_Bool)shouldShowPreviewCommentLikeButton;
- (_Bool)shouldDisablePreviewComments;
- (_Bool)showExploreContextForFeedItem:(IGFeedItem *)arg1;
- (_Bool)shouldHideSponsoredLabelForSponsoredItem;
- (_Bool)shouldShowSponsoredLabelOnly;
- (_Bool)allowSponsoredContextForFeedItem:(IGFeedItem *)arg1;
- (_Bool)showFollowButtonForFeedItem:(IGFeedItem *)arg1;
- (_Bool)shouldShowDisclaimerForFeedItem:(IGFeedItem *)arg1;
- (id)init;
- (id)initWithUserSession:(IGUserSession *)arg1;
@end

