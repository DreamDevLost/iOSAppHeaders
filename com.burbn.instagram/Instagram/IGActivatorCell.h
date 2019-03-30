//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGActivatorCellViewModel, UIButton, UIImageView, UILabel;

@interface IGActivatorCell : UICollectionViewCell
{
    id <IGActivatorCellDelegate> _delegate;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_imageView;
    UIButton *_actionButton;
    IGActivatorCellViewModel *_viewModel;
}

@property(readonly, nonatomic) IGActivatorCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(nonatomic) __weak id <IGActivatorCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_activatorCellButtonTouchDown;
- (void)_activatorCellButtonTouchUp;
- (void)_activatorCellButtonTapped;
- (double)_imageViewYOffsetForActivatorType:(long long)arg1;
- (void)configureWithItem:(id)arg1;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

