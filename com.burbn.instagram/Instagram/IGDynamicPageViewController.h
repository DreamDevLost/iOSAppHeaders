//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGDynamicPageCollectionViewLayoutDelegate.h"
#import "IGDynamicPageRepresentationProvider.h"
#import "IGDynamicPageScrollContext.h"
#import "IGDynamicPageSectionControllerDelegate.h"
#import "IGFeedScrollViewListener.h"
#import "IGListAdapterDataSource.h"

@class IGDynamicPageCollectionViewLayout, IGDynamicPageObjectReusePool, IGDynamicPagePivotView, IGFeedScrollViewAnnouncer, IGListAdapter, NSArray, NSString, UICollectionView;

@interface IGDynamicPageViewController : UIViewController <IGDynamicPageCollectionViewLayoutDelegate, IGDynamicPageRepresentationProvider, IGDynamicPageScrollContext, IGDynamicPageSectionControllerDelegate, IGFeedScrollViewListener, IGListAdapterDataSource>
{
    IGDynamicPageObjectReusePool *_viewControllerReusePool;
    IGDynamicPageObjectReusePool *_placeholderViewReusePool;
    Class _collectionViewClass;
    UICollectionView *_collectionView;
    IGDynamicPageCollectionViewLayout *_collectionViewLayout;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGListAdapter *_listAdapter;
    IGDynamicPagePivotView *_pivotView;
    _Bool _bounces;
    _Bool _animatingContentOffset;
    NSArray *_pageIdentifiers;
    id <IGListDiffable> _selectedPageIdentifier;
    long long _pagingEffect;
    id <IGDynamicPageViewControllerDataSource> _dataSource;
    id <IGDynamicPageViewControllerDelegate> _delegate;
    struct UIEdgeInsets _pageContentInset;
}

@property(nonatomic, getter=isAnimatingContentOffset) _Bool animatingContentOffset; // @synthesize animatingContentOffset=_animatingContentOffset;
@property(nonatomic) __weak id <IGDynamicPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGDynamicPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
@property(nonatomic) long long pagingEffect; // @synthesize pagingEffect=_pagingEffect;
@property(nonatomic) struct UIEdgeInsets pageContentInset; // @synthesize pageContentInset=_pageContentInset;
@property(retain, nonatomic) id <IGListDiffable> selectedPageIdentifier; // @synthesize selectedPageIdentifier=_selectedPageIdentifier;
@property(copy, nonatomic) NSArray *pageIdentifiers; // @synthesize pageIdentifiers=_pageIdentifiers;
- (void).cxx_destruct;
- (void)dynamicPageCollectionViewLayoutDidFinishTransition:(id)arg1;
- (void)dynamicPageCollectionViewLayout:(id)arg1 willAnimateToPage:(long long)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dynamicPageSectionController:(id)arg1 willChangeToRepresentationStyle:(long long)arg2 previousRepresentationStyle:(long long)arg3;
- (void)dynamicPageSectionControllerDidEndBeingDisplayed:(id)arg1;
- (void)dynamicPageSectionControllerWillBeDisplayed:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)recyclePlaceholderView:(id)arg1;
- (id)dequeuePlaceholderViewForPageWithIdentifier:(id)arg1;
- (_Bool)canDisplayPlaceholderViewForPageWithIdentifier:(id)arg1;
- (void)recycleViewController:(id)arg1;
- (id)dequeueViewControllerForPageWithIdentifier:(id)arg1;
- (id)_sectionControllerForPageWithIdentifier:(id)arg1;
- (void)_updatePageSelectionWithReason:(long long)arg1;
- (void)_scrollToSelectedPageAnimated:(_Bool)arg1;
- (void)_setSelectedPageIdentifier:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3 reason:(long long)arg4;
@property(readonly, nonatomic) UICollectionView *collectionView;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
- (id)dequeueReusablePlaceholderViewOfClass:(Class)arg1;
- (id)dequeueReusableViewControllerOfClass:(Class)arg1;
- (void)registerReusablePlaceholderViewClass:(Class)arg1 creationBlock:(CDUnknownBlockType)arg2;
- (void)registerReusableViewControllerClass:(Class)arg1 creationBlock:(CDUnknownBlockType)arg2;
- (void)reloadData:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *viewControllers;
- (id)viewControllerForSelectedPage;
- (id)viewControllerForPageWithIdentifier:(id)arg1;
- (void)setSelectedPageIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)setPageIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (id)initWithCollectionViewClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

