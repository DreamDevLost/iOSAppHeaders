//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, IGExploreTopicSelectorCollectionViewLayout, IGExploreTopicSelectorShimmeringView, UICollectionView;

@interface IGExploreTopicSelectorView : UIView
{
    IGExploreTopicSelectorShimmeringView *_shimmeringView;
    CALayer *_bottomBorderLayer;
    _Bool _displayBottomSeparator;
    _Bool _loading;
    UICollectionView *_collectionView;
    IGExploreTopicSelectorCollectionViewLayout *_collectionViewLayout;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool displayBottomSeparator; // @synthesize displayBottomSeparator=_displayBottomSeparator;
@property(readonly, nonatomic) IGExploreTopicSelectorCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)_setupShimmeringViewIfNeeded;
- (void)layoutSubviews;
- (void)setLoading:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

