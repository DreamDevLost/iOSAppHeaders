//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGActivityFeedViewControllerProtocol.h"
#import "IGInfoViewDelegate.h"
#import "IGNewsDataSourceSectionDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGActivityPreviewingHandler, IGEmptyFeedView, IGInfoView, IGRefreshControl, IGUserSession, IGViewController, NSArray, NSMutableDictionary, NSString, UIView;

@interface IGNewsTableViewController : IGGroupedTableViewController <UITableViewDataSource, UITableViewDelegate, IGNewsDataSourceSectionDelegate, IGInfoViewDelegate, IGActivityFeedViewControllerProtocol>
{
    _Bool _loading;
    IGViewController *containingViewController;
    IGUserSession *_userSession;
    long long _segment;
    NSArray *_sections;
    double _pullToRefreshYInset;
    IGRefreshControl *_refreshControl;
    IGInfoView *_infoView;
    NSMutableDictionary *_webViewCellSizes;
    IGEmptyFeedView *_emptyFeedView;
    UIView *_lineView;
    unsigned long long _fetchState;
    IGActivityPreviewingHandler *_previewDelegate;
}

@property(retain, nonatomic) IGActivityPreviewingHandler *previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(nonatomic) unsigned long long fetchState; // @synthesize fetchState=_fetchState;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) IGEmptyFeedView *emptyFeedView; // @synthesize emptyFeedView=_emptyFeedView;
@property(retain, nonatomic) NSMutableDictionary *webViewCellSizes; // @synthesize webViewCellSizes=_webViewCellSizes;
@property(retain, nonatomic) IGInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) double pullToRefreshYInset; // @synthesize pullToRefreshYInset=_pullToRefreshYInset;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) long long segment; // @synthesize segment=_segment;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak IGViewController *containingViewController; // @synthesize containingViewController;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)needsUpdateHeightsWithNewsDataSection:(id)arg1;
- (void)newsDataSection:(id)arg1 presentViewController:(id)arg2;
- (void)newsDataSection:(id)arg1 handleIntent:(id)arg2;
- (void)newsDataSection:(id)arg1 pushViewController:(id)arg2;
- (void)newsDataSection:(id)arg1 openURL:(id)arg2;
- (void)logFollowEvent:(id)arg1 isFollow:(_Bool)arg2 targetID:(id)arg3 clickPoint:(id)arg4;
- (void)infoViewWasTapped:(id)arg1;
- (void)showNuxIfAppropriate;
- (id)newEmptyFeedView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)_labelForHeaderInSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)_sectionAtSectionIndex:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)prefetch;
- (void)fetchData;
- (id)scrollView;
- (void)_reloadDataFromPullToRefresh;
- (void)finishedLoadingData;
- (void)onFetchFailed:(id)arg1;
- (void)onDataReceived:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
