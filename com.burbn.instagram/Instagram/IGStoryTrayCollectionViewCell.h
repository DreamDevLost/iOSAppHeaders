//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGStoryTrayCollectionViewCellProtocol.h"

@class NSString, UICollectionView, UIView;

@interface IGStoryTrayCollectionViewCell : UICollectionViewCell <IGStoryTrayCollectionViewCellProtocol>
{
    UICollectionView *_collectionView;
    id <IGStoryTrayCollectionViewCellDelegate> _delegate;
    UIView *_topLineView;
    UIView *_bottomLineView;
}

+ (id)collectionViewLayout;
@property(readonly, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(readonly, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) __weak id <IGStoryTrayCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)configureWith:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
