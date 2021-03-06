//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryFullscreenSectionLoggingContextViewerDataSource.h"

@class IGFeedItemTracker, IGNetegoImpressionLogger, IGPhotosRenderedLogger, IGStoryImpressionLoggingManager, IGStoryMediaLoggingModel, IGStoryTrayViewModel, IGUserSession, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface IGStoryViewerLoggingContext : NSObject <IGStoryFullscreenSectionLoggingContextViewerDataSource>
{
    IGUserSession *_userSession;
    long long _entryPoint;
    long long _entryTrayPosition;
    IGStoryTrayViewModel *_entryTrayItem;
    NSArray *_entryTrayOriginalItems;
    double _viewerLaunchDuration;
    NSString *_sourceViewerSessionID;
    _Bool _launchWasLogged;
    _Bool _didLogExit;
    _Bool _supportSponsoredTracking;
    _Bool _fullViewLoggingEnabled;
    long long _sessionOrganicStoryCounter;
    long long _sessionOrganicMediaCounter;
    long long _sessionOrganicLiveCounter;
    long long _sessionOrganicReplayVideosCounter;
    long long _sessionOrganicReplayItemsCounter;
    long long _organicStoryPhotoCounter;
    long long _organicStoryVideoCounter;
    long long _organicStoryLiveCounter;
    long long _organicStoryPostLiveCounter;
    long long _sessionSponsoredStoryCounter;
    long long _sessionSponsoredMediaCounter;
    long long _sponsoredStoryPhotoCounter;
    long long _sponsoredStoryVideoCounter;
    IGFeedItemTracker *_feedItemTracker;
    NSMutableDictionary *_injectedAdPositions;
    IGPhotosRenderedLogger *_pprLogger;
    IGStoryMediaLoggingModel *_currentStoryViewabilityLoggingMostVisibleModel;
    NSMutableSet *_currentStoryReelLoggingVisibleModels;
    NSMutableSet *_currentStoryMediaLoggingVisibleModels;
    NSMutableSet *_mediaDidLoadSet;
    long long _impressionConfig;
    IGNetegoImpressionLogger *_netegoImpressionLogger;
    id <IGStoryViewerLoggingContextDataSource> _dataSource;
    NSString *_sessionID;
    NSString *_entryTraySessionID;
    NSString *_entryTrayRankToken;
    long long _entryReelPosition;
    NSDictionary *_analyticsExtras;
    IGStoryImpressionLoggingManager *_storyImpressionLoggingManager;
}

@property(readonly, nonatomic) IGStoryImpressionLoggingManager *storyImpressionLoggingManager; // @synthesize storyImpressionLoggingManager=_storyImpressionLoggingManager;
@property(readonly, copy, nonatomic) NSDictionary *analyticsExtras; // @synthesize analyticsExtras=_analyticsExtras;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) long long entryReelPosition; // @synthesize entryReelPosition=_entryReelPosition;
@property(readonly, copy, nonatomic) NSString *entryTrayRankToken; // @synthesize entryTrayRankToken=_entryTrayRankToken;
@property(readonly, copy, nonatomic) NSString *entryTraySessionID; // @synthesize entryTraySessionID=_entryTraySessionID;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak id <IGStoryViewerLoggingContextDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (long long)_trayTypeForViewerType:(long long)arg1;
- (long long)_trayPositionForStoryExcludingOwnStory:(id)arg1;
- (id)_extraFieldForReelPlaybackEventForStory:(id)arg1 storyItem:(id)arg2 navAction:(long long)arg3 destinationModule:(id)arg4 sectionLoggingContext:(id)arg5;
- (id)_deprecatedLoggingFieldsForURLTaps:(id)arg1;
- (id)_extrasForLiveWithBroadcast:(id)arg1;
- (id)_loggingTapObjectsForURLTaps:(id)arg1;
- (void)_updateSponsoredMediaCountersWithStoryItem:(id)arg1;
- (void)_updateOrganicMediaCountersWithStoryItem:(id)arg1;
- (void)_updateAndLogImpressionForStoryItem:(id)arg1 story:(id)arg2 impressionType:(unsigned long long)arg3;
- (void)_logTimespentForStoryItem:(id)arg1 story:(id)arg2;
- (void)_logStoryItemDidDisappear:(id)arg1 story:(id)arg2;
- (void)_logStoryItemDidAppear:(id)arg1 story:(id)arg2 impressionType:(unsigned long long)arg3;
- (void)_logStoryItemViewingStarted:(id)arg1;
- (void)_logEventImmediately:(id)arg1 module:(id)arg2 withExtraDictionary:(id)arg3;
- (void)_logEventName:(id)arg1 storyItem:(id)arg2 story:(id)arg3 extraDict:(id)arg4;
- (void)_logUsingFeedItemTrackerWithEventName:(id)arg1 storyItem:(id)arg2 story:(id)arg3 extraDict:(id)arg4;
- (void)_logPostLivePostingStatus:(id)arg1 storyItem:(id)arg2;
- (void)_logStorySessionSummaryForStory:(id)arg1 storyItem:(id)arg2 navAction:(long long)arg3 sectionLoggingContext:(id)arg4;
- (void)_logStoryPlaybackExitForStory:(id)arg1 storyItem:(id)arg2 navAction:(long long)arg3 destinationModule:(id)arg4 sectionLoggingContext:(id)arg5;
- (void)_logStoryPlaybackNavigationForStory:(id)arg1 fromStoryItem:(id)arg2 toStoryItem:(id)arg3 navAction:(long long)arg4 destinationModule:(id)arg5 sectionLoggingContext:(id)arg6;
- (void)_logStoryPlaybackEntryForStory:(id)arg1 storyItem:(id)arg2;
- (long long)initialEntryPoint;
- (id)viewerSessionFieldsWithMediaType:(long long)arg1 isHighlight:(_Bool)arg2 isMainFeedTraySuggestion:(_Bool)arg3 viewerPosition:(id)arg4;
- (id)sponsoredStoryInsertedIndexWithStoryPk:(id)arg1;
- (long long)trayPositionForStory:(id)arg1;
- (id)reelExtrasForStory:(id)arg1 storyItem:(id)arg2;
- (void)notifyStoryNetegoDelivery:(id)arg1;
- (void)notifyDidTapContinueSensitivityViewActionSheetForStoryItem:(id)arg1 story:(id)arg2;
- (void)notifyDidDismissSensitivityViewActionSheetForStoryItem:(id)arg1 story:(id)arg2;
- (void)notifyDidDisplaySensitivityViewActionSheetForStoryItem:(id)arg1 story:(id)arg2;
- (void)notifyDidDisplaySensitivityViewForStoryItem:(id)arg1 story:(id)arg2;
- (id)reelViewerPosition:(id)arg1;
- (id)extraInfoWithImpressionInfoForStory:(id)arg1 item:(id)arg2;
- (id)_sponsoredFieldsForStoryItem:(id)arg1;
- (id)extraInfoFromStory:(id)arg1 item:(id)arg2;
- (void)notifyLongPressOnSponsoredStoryForStoryItem:(id)arg1 story:(id)arg2 pressPoint:(struct CGPoint)arg3 extra:(id)arg4;
- (void)notifyDirectReshareAdsSendForStoryItem:(id)arg1 story:(id)arg2 directRecipients:(id)arg3;
- (void)notifyStoryAdsOptInTextTapped:(id)arg1 storyItem:(id)arg2 extras:(id)arg3;
- (void)notifyLandscapeAdsExpandCaption:(id)arg1 storyItem:(id)arg2 extras:(id)arg3;
- (void)notifyLandscapeAdsCollapseCaption:(id)arg1 storyItem:(id)arg2 extras:(id)arg3;
- (void)notifySponsoredStoryInjected:(id)arg1 atIndex:(long long)arg2;
- (void)notifySponsoredStoryInvalidation:(id)arg1 storyItem:(id)arg2 withReasons:(unsigned long long)arg3;
- (void)notifySponsoredStoryInvalidation:(id)arg1 storyItem:(id)arg2 withReason:(unsigned long long)arg3;
- (void)notifySponsoredStoryRequestFinishWithReelIDs:(id)arg1 statusCode:(long long)arg2 latency:(double)arg3 isFirstRequest:(_Bool)arg4;
- (void)notifySponsoredStoryDelivery:(id)arg1 storyItem:(id)arg2 focusedStoryIndex:(long long)arg3 adRequestIndex:(long long)arg4 entryIndex:(long long)arg5 adPositionFromServer:(long long)arg6 adInsertionIndex:(long long)arg7;
- (id)_postLiveImpressionsExtrasDictionaryWithStory:(id)arg1 storyItem:(id)arg2;
- (void)notifyExitAtStory:(id)arg1 storyItem:(id)arg2 navAction:(long long)arg3;
- (void)notifyFailToLoadStory:(id)arg1 storyItem:(id)arg2 error:(id)arg3 networkRequestSummary:(id)arg4;
- (void)notifyStartShowingStory:(id)arg1 storyItem:(id)arg2;
- (void)notifyStartShowingStoryPreview:(id)arg1 storyItem:(id)arg2 progressiveJPEGScanNumber:(id)arg3;
- (void)notifyDidLoadMediaForStory:(id)arg1 storyItem:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)notifyWillLoadImageURL:(id)arg1 story:(id)arg2 storyItem:(id)arg3;
- (void)notifyNavFromStory:(id)arg1 storyItem:(id)arg2 navAction:(long long)arg3 destinationModule:(id)arg4 sectionLoggingContext:(id)arg5;
- (void)notifyNavFromStory:(id)arg1 fromStoryItem:(id)arg2 toStory:(id)arg3 toStoryItem:(id)arg4 navAction:(long long)arg5 sectionLoggingContext:(id)arg6;
- (void)notifyAfterEntryUpdateToStory:(id)arg1 storyItem:(id)arg2;
- (void)notifyEntryAtStory:(id)arg1 storyItem:(id)arg2;
- (id)extrasForPostLiveBroadcast:(id)arg1;
- (id)extrasForBroadcast:(id)arg1 mediaType:(long long)arg2;
- (id)livePlaybackLoggerForBroadcast:(id)arg1;
- (void)notifyStoryMediaImpressionUpdateWithNewVisibleModels:(id)arg1 impresionType:(unsigned long long)arg2;
- (void)notifyStoryReelImpressionUpdateWithNewVisibleModels:(id)arg1 impressionType:(unsigned long long)arg2;
- (void)_storyMediaImpressionEnd:(id)arg1 storyItem:(id)arg2;
- (void)_storyMediaImpressionStart:(id)arg1 storyItem:(id)arg2 impressionType:(unsigned long long)arg3;
- (void)_storyReelImpressionEnd:(id)arg1 storyItem:(id)arg2 impressionType:(unsigned long long)arg3;
- (void)_storyReelImpressionStart:(id)arg1 storyItem:(id)arg2 impressionType:(unsigned long long)arg3;
- (void)_endViewabilityLogging:(id)arg1;
- (void)_startViewabilityLogging:(id)arg1;
- (void)notifyStoryViewabilityImpressionUpdateWithMostVisibleModel:(id)arg1;
- (void)notifyPoliticalAdBannerTappedForStory:(id)arg1 storyItem:(id)arg2;
- (id)initWithUserSession:(id)arg1 entryPoint:(long long)arg2 traySessionID:(id)arg3 trayRankToken:(id)arg4 trayPosition:(long long)arg5 entryTrayItem:(id)arg6 originalTrayItems:(id)arg7 viewerLaunchDuration:(double)arg8 sourceViewerSessionID:(id)arg9 analyticsExtras:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

