//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedConfigurationType.h"

@class IGDefaultFeedConfiguration, IGUserSession, NSString;

@interface IGWatchAndMoreFeedConfiguration : NSObject <IGFeedConfigurationType>
{
    IGUserSession *_userSession;
    IGDefaultFeedConfiguration *_defaultConfig;
    _Bool _fullviewLoggingEnabled;
}

- (void).cxx_destruct;
- (_Bool)videoStitchingEnabled;
- (_Bool)useAutoplayStrategyforHorizontalVideos;
- (unsigned long long)tombstoneTypeForFeed;
- (_Bool)supportsEdgePostLabel;
- (_Bool)supportStoryRingInHeader;
- (_Bool)supportSponsoredTracking;
- (_Bool)supportSocialContext;
- (_Bool)supportSeenState;
- (_Bool)supportFavoritesTooltip;
- (_Bool)supportDirectReplyToAuthorInUFI;
- (_Bool)supportDirectReplyToAuthorInHeader;
- (_Bool)supportCarouselIndexing;
- (_Bool)supportCarouselBumpingAnimation;
- (_Bool)supportAccountRecommendations;
- (_Bool)shouldTrackCarouselSeenState;
- (_Bool)shouldTombstoneForUnrelatedHashtagFeedItem;
- (_Bool)shouldShowTopSeparator;
- (_Bool)shouldRenderMediaInSquare;
- (_Bool)shouldPrefetchMediaForFeedItems;
- (_Bool)shouldAutoplayVideos;
- (_Bool)shouldAutoDismissShoppingShelf;
- (id)savedMediaCollection;
- (_Bool)persistentOverlayIndicators;
- (long long)pageIndicatorType;
- (double)loadDistance;
- (_Bool)interactiveTagHints;
- (_Bool)hideDismissedPostsOnDisappear;
- (_Bool)fullviewLoggingEnabled;
- (long long)feedItemHeaderStoryEntryPoint;
- (id)feedConsumptionTracker;
- (id)feedAccessibilityIdentifier;
- (CDStruct_8ab98ee7)carouselInteractionOptions;
- (id)analyticsModule;
- (long long)UFISaveButtonStyle;
- (long long)UFIPageIndicatorPosition;
- (long long)UFIExternalShareButtonStyle;
- (struct UIEdgeInsets)CTAButtonTappableInsets;
- (unsigned long long)CTAButtonAccessoryPosition;
- (id)initWithUserSession:(id)arg1 moduleName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

