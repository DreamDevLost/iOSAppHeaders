//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGLiveBroadcastViewerListQueryServiceDelegate.h"
#import "IGLiveBroadcastViewerListViewDelegate.h"

@class IGListAdapter, IGLiveBroadcastLoggingContext, IGLiveBroadcastViewerListQueryService, IGLiveBroadcastViewerListView, IGLiveBroadcastViewerListViewDataSource, IGUserSession, NSString;

@interface IGLiveViewerListViewController : UIViewController <IGLiveBroadcastViewerListQueryServiceDelegate, IGLiveBroadcastViewerListViewDelegate>
{
    IGLiveBroadcastViewerListQueryService *_viewerListService;
    IGUserSession *_userSession;
    IGLiveBroadcastLoggingContext *_loggingContext;
    IGLiveBroadcastViewerListView *_viewerListView;
    IGListAdapter *_listAdapter;
    id <IGStoryViewerSectionControllerViewerDelegate> _viewerDelegate;
    IGLiveBroadcastViewerListViewDataSource *_dataSource;
}

@property(retain, nonatomic) IGLiveBroadcastViewerListViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) __weak id <IGStoryViewerSectionControllerViewerDelegate> viewerDelegate; // @synthesize viewerDelegate=_viewerDelegate;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) IGLiveBroadcastViewerListView *viewerListView; // @synthesize viewerListView=_viewerListView;
@property(readonly, nonatomic) __weak IGLiveBroadcastLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGLiveBroadcastViewerListQueryService *viewerListService; // @synthesize viewerListService=_viewerListService;
- (void).cxx_destruct;
- (void)doneButtonTappedInViewerListView:(id)arg1;
- (void)viewerListQueryService:(id)arg1 didLoadFinalViewerList:(id)arg2 withFinalViewerCount:(long long)arg3;
- (void)viewerListQueryService:(id)arg1 didLoadViewerList:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithBroadcastId:(id)arg1 userSession:(id)arg2 loggingContext:(id)arg3 viewerDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

