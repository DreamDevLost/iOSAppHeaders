//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGalleryFragmentController.h"
#import "IGStoryTrayDataSourceListener.h"
#import "IGStoryTraySectionControllerLoggingDelegate.h"
#import "IGStoryTraySectionControllerViewerDelegate.h"

@class IGListSectionController, IGStoryTrayLoggingContext, IGStoryTraySectionController, IGSuggestedHighlightsDataSource, IGSuggestedHighlightsFragment, IGUserSession, NSString;

@interface IGSuggestedHighlightsController : NSObject <IGStoryTrayDataSourceListener, IGStoryTraySectionControllerViewerDelegate, IGStoryTraySectionControllerLoggingDelegate, IGGalleryFragmentController>
{
    NSString *_analyticsModule;
    IGSuggestedHighlightsFragment *_fragment;
    IGStoryTrayLoggingContext *_loggingContext;
    IGStoryTraySectionController *_sectionController;
    IGUserSession *_session;
    IGSuggestedHighlightsDataSource *_dataSource;
    id <IGSuggestedHighlightsControllerDelegate> _delegate;
}

+ (_Bool)canRenderFragment:(id)arg1;
@property(nonatomic) __weak id <IGSuggestedHighlightsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storyTraySectionController:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3;
- (void)storyTraySectionControllerDidLaunchIGTVViewer:(id)arg1;
- (void)storyTraySectionController:(id)arg1 willLogImpressionOfItem:(id)arg2 atIndex:(long long)arg3;
- (void)storyTraySectionControllerScrollViewWillScrollNearRight:(id)arg1;
- (void)storyTraySectionControllerViewerDidPublishHighlight:(id)arg1;
- (void)storyTraySectionController:(id)arg1 didDismissViewerWithUnseenItems:(_Bool)arg2 shouldRemainVisible:(_Bool)arg3 addToStoryNUXModel:(id)arg4;
- (void)storyTrayDataSource:(id)arg1 didUpdateWithRefreshType:(long long)arg2;
- (void)storyTrayDataSource:(id)arg1 didUpdateReel:(id)arg2 positionChanged:(_Bool)arg3;
- (void)storyTrayDataSource:(id)arg1 updateFailedWithRefreshType:(long long)arg2 error:(id)arg3;
- (void)_generateSectionControllerIfNecessary;
@property(readonly, nonatomic) IGListSectionController *sectionController;
- (id)initWithFragment:(id)arg1 session:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

