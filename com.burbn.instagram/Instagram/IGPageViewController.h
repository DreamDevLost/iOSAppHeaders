//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCustomViewController.h"
#import "IGGestureCoordinatingCollectionViewTouchCancellationDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGGestureCoordinatingCollectionView, NSArray, NSMapTable, NSString, UIViewController;

@interface IGPageViewController : IGViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, IGGestureCoordinatingCollectionViewTouchCancellationDelegate, IGCustomViewController>
{
    struct {
        unsigned int didChangeCurrentViewControllerToController:1;
        unsigned int didChangeCurrentViewControllerFromToController:1;
        unsigned int willShowViewController:1;
        unsigned int willBeginDragging:1;
        unsigned int didFinishScrolling:1;
        unsigned int didScroll:1;
        unsigned int touchesShouldCancelInContentView:1;
    } _delegateImplementedMethods;
    _Bool _shouldDisableNavigationEvent;
    _Bool _swipingDisabled;
    _Bool _disablingChildScrollViews;
    id <IGPageViewControllerDataSource> _dataSource;
    id <IGPageViewControllerDelegate> _delegate;
    IGGestureCoordinatingCollectionView *_collectionView;
    NSString *_analyticsModule;
    long long _currentIndex;
    NSArray *_disabledScrollViews;
    NSMapTable *_indexesToCachedViewControllers;
    long long _indexToScrollToOnViewDidLoad;
}

@property(nonatomic) long long indexToScrollToOnViewDidLoad; // @synthesize indexToScrollToOnViewDidLoad=_indexToScrollToOnViewDidLoad;
@property(retain, nonatomic) NSMapTable *indexesToCachedViewControllers; // @synthesize indexesToCachedViewControllers=_indexesToCachedViewControllers;
@property(nonatomic) _Bool disablingChildScrollViews; // @synthesize disablingChildScrollViews=_disablingChildScrollViews;
@property(retain, nonatomic) NSArray *disabledScrollViews; // @synthesize disabledScrollViews=_disabledScrollViews;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(nonatomic) _Bool swipingDisabled; // @synthesize swipingDisabled=_swipingDisabled;
@property(retain, nonatomic) IGGestureCoordinatingCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <IGPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)disableNavigationEvent;
- (_Bool)_currentControllerCanRespondToGesture:(id)arg1;
@property(readonly, nonatomic) UIViewController *currentController;
@property(readonly, nonatomic) long long currentPage;
- (void)deleteCurrentPage;
- (void)insertPagesAtIndexes:(id)arg1;
- (void)reloadData;
- (void)setVisibleIndex:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)gestureCoordinatingCollectionView:(id)arg1 touchesShouldCancelInContentView:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)ig_keyViewControllers;
- (void)didReceiveMemoryWarning;
- (void)_enableDisabledScrollViews;
- (void)_disableScrollingInChildViewControllers;
- (id)_disableScrollViewsForViewController:(id)arg1;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (struct CGRect)_collectionViewFrame;
- (void)_notifyForFinishedScrolling;
- (void)forceUpdateVisibleIndex;
- (void)_updateCurrentIndexWithOffset:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithShouldDisableNavigationEvent:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
