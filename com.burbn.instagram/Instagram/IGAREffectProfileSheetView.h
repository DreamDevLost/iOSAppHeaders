//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGGestureHandler.h"

@class NSString, UICollectionView, UILabel;

@interface IGAREffectProfileSheetView : UIView <IGGestureHandler>
{
    UILabel *_headerLabel;
    UIView *_separatorView;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

