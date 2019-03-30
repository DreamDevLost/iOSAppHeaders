//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGTabBarControllerDelegate.h"

@class IGMainAppSurfaceIntent, NSArray, UICollectionView, UICollectionViewLayout;

@interface IGMainAppScrollingContainerDataSource : NSObject <IGTabBarControllerDelegate>
{
    NSArray *_collectionViewItems;
    IGMainAppSurfaceIntent *_currentTabBarSurface;
    UICollectionViewLayout *_collectionViewLayout;
    _Bool _pendingSideTrayReset;
    _Bool _directIsInTab;
    _Bool _sideTrayDisabled;
    _Bool _directAppEnabled;
    UICollectionView *_collectionView;
}

@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool directAppEnabled; // @synthesize directAppEnabled=_directAppEnabled;
@property(nonatomic) _Bool sideTrayDisabled; // @synthesize sideTrayDisabled=_sideTrayDisabled;
- (void).cxx_destruct;
- (void)_updateCollectionViewItems:(id)arg1;
- (void)_setCollectionViewLayout:(id)arg1;
- (void)_updateCollectionViewItemsAndLayoutWithSideTrayIncluded:(_Bool)arg1 updateLayoutForDirect:(_Bool)arg2;
- (void)_updateCollectionViewItemsAndLayoutForCurrentState;
- (_Bool)_includeSideTrayForCurrentState;
- (void)tabBarController:(id)arg1 didSwitchToSurface:(id)arg2;
- (void)resetSideTrayIfNeeded;
- (void)disableProfileTray;
- (void)enableProfileTray;
- (void)ensureCameraWithBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1 viewSize:(struct CGSize)arg2;
- (id)collectionViewLayout;
- (double)contentOffsetXForItem:(long long)arg1;
- (long long)itemForContentOffset:(struct CGPoint)arg1 viewWidth:(double)arg2;
- (id)collectionViewItems;
- (long long)itemAtIndexPath:(id)arg1;
- (id)indexPathForItem:(long long)arg1;
- (_Bool)_directIsInScrollView;
- (id)init;

@end

