//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListAdapterDataSource.h"
#import "IGListDisplayDelegate.h"
#import "IGListWorkingRangeDelegate.h"
#import "IGTVChannelDataSourceListener.h"
#import "IGTVFeedTrayThumbnailDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGListAdapter, IGUserSession, NSArray, NSString;

@interface IGTVFeedTrayListController : NSObject <IGListAdapterDataSource, IGTVChannelDataSourceListener, IGTVFeedTrayThumbnailDelegate, UIScrollViewDelegate, IGListDisplayDelegate, IGListWorkingRangeDelegate>
{
    IGUserSession *_userSession;
    Class _thumbnailCellClass;
    _Bool _shouldShowInitialLoading;
    _Bool _preserveContentOffset;
    double _initialXContentOffset;
    NSString *_analyticsModule;
    NSArray *_tailLoadingObjects;
    _Bool _isDisplayed;
    _Bool _isWithinWorkingRange;
    _Bool _hasDisplayedOnce;
    struct CGPoint _preservedContentOffset;
    id <IGTVFeedTrayListControllerDelegate> _delegate;
    id <IGTVFeedTrayListControllerVisibleCellProvider> _visibleCellProvider;
    id <IGTVChannelDataSourceType> _channelDataSource;
    IGListAdapter *_listAdapter;
}

@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) id <IGTVChannelDataSourceType> channelDataSource; // @synthesize channelDataSource=_channelDataSource;
@property(nonatomic) __weak id <IGTVFeedTrayListControllerVisibleCellProvider> visibleCellProvider; // @synthesize visibleCellProvider=_visibleCellProvider;
@property(nonatomic) __weak id <IGTVFeedTrayListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_loadMoreIfNeededForCell:(id)arg1 contentOffset:(struct CGPoint)arg2;
- (void)_loadMoreIfNeededForCell:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)didSelectFeedTrayThumbnailSectionController:(id)arg1;
- (void)channelDataSourceDidUpdate:(id)arg1 fromAction:(long long)arg2;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 thumbnailCellClass:(Class)arg2 shouldShowInitialLoading:(_Bool)arg3 preserveContentOffset:(_Bool)arg4 initialXContentOffset:(double)arg5 analyticsModule:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
