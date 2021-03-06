//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UICollectionView, UILabel;

@interface IGVideoCallInviteListHeaderView : UIView
{
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    double _cachedTitleLabelHeight;
    double _cachedSubtitleLabelHeight;
    long long _groupExpansionState;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setupCollectionView;
- (void)_setupLabels;
- (void)setGroupExpansionState:(long long)arg1;
- (id)initWithGroupExpansionState:(long long)arg1;

@end

