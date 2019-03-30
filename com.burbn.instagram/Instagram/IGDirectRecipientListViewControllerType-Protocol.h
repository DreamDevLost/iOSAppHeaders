//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGestureHandler.h"

@class NSArray, UICollectionView, UIView;

@protocol IGDirectRecipientListViewControllerType <IGGestureHandler>
@property(readonly, nonatomic) UICollectionView *collectionView;
@property(readonly, nonatomic) UIView *customHeaderView;
@property(nonatomic) __weak id <IGDirectRecipientListViewControllerPresentationDelegate> listPresentationDelegate;
@property(nonatomic) __weak id <IGDirectRecipientListViewControllerDelegate> delegate;
- (double)privacyBannerHeight;
- (void)updateWithSelectedHighlightTitles:(NSArray *)arg1;
- (void)snapshotAndHideActionBar:(_Bool)arg1;
@end
