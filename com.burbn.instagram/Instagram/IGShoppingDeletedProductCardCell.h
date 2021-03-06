//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class IGBlurredImageView, IGShoppingDeletedProductUserInfoView, NSString, UIButton, UILabel, UIView;

@interface IGShoppingDeletedProductCardCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    UIView *_imageContainerView;
    IGBlurredImageView *_blurredImageView;
    UILabel *_descriptionLabel;
    IGShoppingDeletedProductUserInfoView *_userInfoView;
    UIButton *_dismissButton;
    UIView *_dimmingView;
    id <IGShoppingDeletedProductCardCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingDeletedProductCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_roundCornersForLayer:(id)arg1;
- (void)prepareForReuse;
- (void)_dismissButtonDidTap:(id)arg1;
- (void)configureWithUser:(id)arg1 analyticsModule:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

