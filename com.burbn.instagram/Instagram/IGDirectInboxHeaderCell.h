//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGTapButton, UILabel;

@interface IGDirectInboxHeaderCell : UICollectionViewCell
{
    id <IGDirectInboxHeaderCellDelegate> _delegate;
    UILabel *_headerLabel;
    IGTapButton *_headerActionButton;
}

- (void).cxx_destruct;
- (void)_headerActionButtonTapped:(id)arg1;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)_layoutTitleAndImageForHeaderActionButton;
- (void)layoutSubviews;
- (void)_setupHeaderActionButton;
- (void)_setupHeaderLabel;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

