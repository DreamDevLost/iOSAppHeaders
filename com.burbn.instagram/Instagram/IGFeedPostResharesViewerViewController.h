//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGListAdapterDataSource.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGEmptyFeedView, IGGalleryLayout, IGListAdapter, IGStoryViewerPresentationController, IGUserSession, NSArray, NSMutableDictionary, NSString, UICollectionView;

@interface IGFeedPostResharesViewerViewController : IGViewController <IGListAdapterDataSource, IGMediaThumbnailSectionControllerSelectionDelegate, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_adapter;
    IGEmptyFeedView *_emptyView;
    IGGalleryLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    NSString *_feedMediaId;
    NSArray *_medias;
    _Bool _hasLoadedOnce;
    _Bool _isLoading;
    NSString *_maxID;
    NSMutableDictionary *_storyIDsToReels;
    IGStoryViewerPresentationController *_storyPresentationController;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)didSelectFeedItem:(id)arg1;
- (void)_fetchIfNeededForTargetOffset:(struct CGPoint)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_onFetchReelsSuccess:(id)arg1;
- (void)_onFetchReelsFailure;
- (void)_fetchStories;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 mediaID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
