//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedConfigurationType.h"

@class IGDefaultFeedConfiguration, IGUserSession, NSString;

@interface IGAdPreviewFeedConfiguration : NSObject <IGFeedConfigurationType>
{
    IGUserSession *_userSession;
    _Bool _fullviewLoggingEnabled;
    IGDefaultFeedConfiguration *_defaultConfig;
}

@property(readonly, nonatomic) IGDefaultFeedConfiguration *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
- (void).cxx_destruct;
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
- (id)feedConsumptionTracker;
- (_Bool)shouldAutoDismissShoppingShelf;
- (_Bool)supportCarouselIndexing;
- (_Bool)supportCarouselBumpingAnimation;
- (_Bool)shouldTrackCarouselSeenState;
- (_Bool)shouldTombstoneForUnrelatedHashtagFeedItem;
- (_Bool)supportAccountRecommendations;
- (CDStruct_8ab98ee7)carouselInteractionOptions;
- (unsigned long long)tombstoneTypeForFeed;
- (id)feedAccessibilityIdentifier;
- (_Bool)supportSeenState;
- (id)savedMediaCollection;
- (id)analyticsModule;
- (_Bool)supportFavoritesTooltip;
- (_Bool)supportSocialContext;
- (_Bool)supportsEdgePostLabel;
- (_Bool)supportStoryRingInHeader;
- (_Bool)shouldPrefetchMediaForFeedItems;
- (_Bool)useAutoplayStrategyforHorizontalVideos;
- (_Bool)videoStitchingEnabled;
- (_Bool)shouldAutoplayVideos;
- (long long)feedItemHeaderStoryEntryPoint;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

