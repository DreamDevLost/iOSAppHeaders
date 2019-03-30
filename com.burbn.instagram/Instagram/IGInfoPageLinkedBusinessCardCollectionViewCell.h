//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGLocalImagesDisplayCardViewDelegate.h"
#import "IGLocalInfoDisplaySectionViewDelegate.h"

@class IGInfoLinkedBusinessViewModel, IGLocalImagesDisplayCardView, IGLocalInfoDisplaySectionView, NSString, UIView;

@interface IGInfoPageLinkedBusinessCardCollectionViewCell : UICollectionViewCell <IGLocalImagesDisplayCardViewDelegate, IGLocalInfoDisplaySectionViewDelegate>
{
    IGInfoLinkedBusinessViewModel *_viewModel;
    IGLocalInfoDisplaySectionView *_infoBannerView;
    UIView *_cardBackgroundView;
    IGLocalImagesDisplayCardView *_imagesView;
    id <IGInfoPageLinkedBusinessCardCollectionViewCellDelegate> _delegate;
}

+ (double)heightCellWidth:(double)arg1;
@property(nonatomic) __weak id <IGInfoPageLinkedBusinessCardCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)localBusinessTileCardView:(id)arg1 didTapStoryReel:(id)arg2;
- (void)localBusinessTileCardView:(id)arg1 didTapTitle:(id)arg2;
- (void)localBusinessTileCardView:(id)arg1 didTapProfilePicture:(id)arg2;
- (void)localBusinessTileCardView:(id)arg1 didTapViewProfileButton:(id)arg2;
- (void)localBusinessImagesDisplayCardView:(id)arg1 didSelectFeedItem:(id)arg2;
- (void)configureCellWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
