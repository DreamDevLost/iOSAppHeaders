//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedSectionControllerDirectSharingDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGMainFeedNetegoImpressionExtrasProvider.h"
#import "IGStoryTrayLoggingContextDataSource.h"

@class IGFeedNetworkSource, IGFeedStatusView, IGHScrollPreviewHideDelegate, IGMainFeedNetegoImpressionStrategy, IGMainFeedSlideshowToggle, IGMainStoryTrayDataSource, IGQPMegaphone, IGQPMegaphoneSectionControllerPresenter, IGQuickPromotionCoordinator, IGUserSession, NSArray, NSString;

@interface IGMainFeedListAdapterDataSource : NSObject <IGFeedSectionControllerDirectSharingDelegate, IGListAdapterDataSource, IGStoryTrayLoggingContextDataSource, IGMainFeedNetegoImpressionExtrasProvider>
{
    IGQuickPromotionCoordinator *_qpCoordinator;
    IGQPMegaphone *_qpMegaphone;
    IGQPMegaphoneSectionControllerPresenter *_qpMegaphoneSectionControllerPresenter;
    IGMainFeedNetegoImpressionStrategy *_netegoStrategy;
    _Bool _netegoLoggingWithNewFrameworkOnly;
    IGHScrollPreviewHideDelegate *_previewHideDelegate;
    IGMainFeedSlideshowToggle *_slideshowToggle;
    _Bool _neverShowWelcomeCard;
    _Bool _showWelcomeCard;
    id <IGFeedMegaphoneProvider> _megaphoneProvider;
    IGFeedStatusView *_feedStatusView;
    id <IGFeedSectionControllerComponentsType> _feedSectionControllerComponents;
    NSArray *_items;
    IGUserSession *_userSession;
    IGFeedNetworkSource *_networkSource;
    NSString *_analyticsModule;
    id <IGMainFeedListAdapterDataSourceDelegate> _delegate;
    id <IGMainFeedStoryTrayLoggingContextProvider> _loggingContextProvider;
    id <IGStoryTraySectionControllerViewerDelegate> _storyTrayViewerDelegate;
    IGMainStoryTrayDataSource *_mainStoryTrayDataSource;
    id <IGDirectShareSheetControlling> _reshareController;
}

@property(nonatomic) _Bool showWelcomeCard; // @synthesize showWelcomeCard=_showWelcomeCard;
@property(readonly, nonatomic) id <IGDirectShareSheetControlling> reshareController; // @synthesize reshareController=_reshareController;
@property(readonly, nonatomic) IGMainStoryTrayDataSource *mainStoryTrayDataSource; // @synthesize mainStoryTrayDataSource=_mainStoryTrayDataSource;
@property(readonly, nonatomic) __weak id <IGStoryTraySectionControllerViewerDelegate> storyTrayViewerDelegate; // @synthesize storyTrayViewerDelegate=_storyTrayViewerDelegate;
@property(readonly, nonatomic) __weak id <IGMainFeedStoryTrayLoggingContextProvider> loggingContextProvider; // @synthesize loggingContextProvider=_loggingContextProvider;
@property(readonly, nonatomic) __weak id <IGMainFeedListAdapterDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGFeedNetworkSource *networkSource; // @synthesize networkSource=_networkSource;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool neverShowWelcomeCard; // @synthesize neverShowWelcomeCard=_neverShowWelcomeCard;
@property(readonly, nonatomic) id <IGFeedSectionControllerComponentsType> feedSectionControllerComponents; // @synthesize feedSectionControllerComponents=_feedSectionControllerComponents;
@property(readonly, nonatomic) IGFeedStatusView *feedStatusView; // @synthesize feedStatusView=_feedStatusView;
@property(readonly, nonatomic) id <IGFeedMegaphoneProvider> megaphoneProvider; // @synthesize megaphoneProvider=_megaphoneProvider;
- (void).cxx_destruct;
- (_Bool)_postsContainOnlyOwnOrAYMFPosts:(id)arg1;
- (_Bool)_isEmptyFeedSUV2Enabled;
- (id)storyTrayViewModelsForLoggingContext;
- (void)feedSectionControllerDidDismissDirectShareSheet;
- (void)feedSectionController:(id)arg1 willPresentDirectShareSheet:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)updateWithQPMegaphone:(id)arg1 qpSectionControllerPresenter:(id)arg2;
- (_Bool)shouldShowWelcomeCard;
- (id)objectsForListAdapter:(id)arg1;
- (id)_objects;
- (id)netEgoExtrasForObject:(id)arg1;
- (id)initWithUserSession:(id)arg1 feedComponents:(id)arg2 storyTrayLoggingContextProvider:(id)arg3 storyTrayViewerDelegate:(id)arg4 networkSource:(id)arg5 delegate:(id)arg6 analyticsModule:(id)arg7 netegoImpressionLogger:(id)arg8 netegoLogWithNewFrameworkOnly:(_Bool)arg9 slideshowToggle:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
