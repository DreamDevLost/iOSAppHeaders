//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGOptionSelectionLargeCardView, IGProAccountTypeViewModel;

@interface IGProAccountTypeCell : UICollectionViewCell
{
    IGOptionSelectionLargeCardView *_cardView;
    IGProAccountTypeViewModel *_viewModel;
    id <IGProAccountTypeCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_selectButtonTapped;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;

@end

