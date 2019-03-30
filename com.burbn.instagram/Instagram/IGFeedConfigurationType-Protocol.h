//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedConsumptionTracker, IGSavedMediaCollection, NSString;

@protocol IGFeedConfigurationType <NSObject>
- (struct UIEdgeInsets)CTAButtonTappableInsets;
- (unsigned long long)CTAButtonAccessoryPosition;
- (_Bool)fullviewLoggingEnabled;
- (double)loadDistance;
- (_Bool)shouldShowTopSeparator;
- (_Bool)hideDismissedPostsOnDisappear;
- (_Bool)interactiveTagHints;
- (_Bool)persistentOverlayIndicators;
- (long long)UFIPageIndicatorPosition;
- (long long)pageIndicatorType;
- (long long)UFIExternalShareButtonStyle;
- (long long)UFISaveButtonStyle;
- (_Bool)supportDirectReplyToAuthorInHeader;
- (_Bool)supportDirectReplyToAuthorInUFI;
- (_Bool)supportSponsoredTracking;
- (_Bool)shouldRenderMediaInSquare;
- (_Bool)supportSeenState;
- (IGFeedConsumptionTracker *)feedConsumptionTracker;
- (_Bool)shouldAutoDismissShoppingShelf;
- (_Bool)supportCarouselIndexing;
- (_Bool)supportCarouselBumpingAnimation;
- (_Bool)shouldTrackCarouselSeenState;
- (_Bool)shouldTombstoneForUnrelatedHashtagFeedItem;
- (_Bool)supportAccountRecommendations;
- (CDStruct_8ab98ee7)carouselInteractionOptions;
- (_Bool)supportFavoritesTooltip;
- (unsigned long long)tombstoneTypeForFeed;
- (NSString *)feedAccessibilityIdentifier;
- (IGSavedMediaCollection *)savedMediaCollection;
- (NSString *)analyticsModule;
- (_Bool)supportSocialContext;
- (_Bool)supportsEdgePostLabel;
- (_Bool)supportStoryRingInHeader;
- (_Bool)useAutoplayStrategyforHorizontalVideos;
- (_Bool)videoStitchingEnabled;
- (_Bool)shouldAutoplayVideos;
- (_Bool)shouldPrefetchMediaForFeedItems;
- (long long)feedItemHeaderStoryEntryPoint;
@end

