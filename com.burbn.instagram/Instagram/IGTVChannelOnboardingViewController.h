//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGTVChannelOnboardingView, IGUserSession, NSArray, NSString, UIBarButtonItem;

@interface IGTVChannelOnboardingViewController : IGViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    IGUserSession *_userSession;
    IGTVChannelOnboardingView *_onboardingView;
    UIBarButtonItem *_cancelItem;
    UIBarButtonItem *_backItem;
    NSArray *_viewModels;
    id <IGTVChannelOnboardingDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTVChannelOnboardingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateLeftBarItem;
- (void)_scrollToItemAtIndex:(long long)arg1;
- (void)_createChannelTapped;
- (void)_pageControlChanged;
- (void)_backTapped;
- (void)_nextTapped;
- (void)_cancelTapped;
- (id)analyticsModule;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

