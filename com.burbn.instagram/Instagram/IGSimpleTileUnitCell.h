//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGTileUnitCell.h"

@class IGButton, IGGridTileLayout, NSArray, UIView;

@interface IGSimpleTileUnitCell : UICollectionViewCell <IGTileUnitCell>
{
    NSArray *_photoViews;
    IGGridTileLayout *_layout;
    UIView *_photosContainerView;
    IGButton *_actionButton;
    id <IGTileUnitCellDelegate> _delegate;
}

+ (double)heightForWidth:(double)arg1 columns:(long long)arg2 rows:(long long)arg3 buttonText:(id)arg4;
@property(nonatomic) __weak id <IGTileUnitCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_photoViewWasTapped:(id)arg1;
- (void)_buttonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithPhotos:(id)arg1 columns:(long long)arg2 rows:(long long)arg3 buttonText:(id)arg4 analyticsModule:(id)arg5;
- (void)_buildPhotoViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

