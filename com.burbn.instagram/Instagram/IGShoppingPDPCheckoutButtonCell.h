//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGTextButton;

@interface IGShoppingPDPCheckoutButtonCell : UICollectionViewCell
{
    IGTextButton *_checkoutButton;
    id <IGShoppingPDPCheckoutButtonCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingPDPCheckoutButtonCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapCheckoutButton;
- (void)configureWithText:(id)arg1 isEnabled:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
