//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, IGLabel, UIButton;

@interface IGTitleAndActionCell : UICollectionViewCell
{
    IGLabel *_textLabel;
    CALayer *_topSeparator;
    CALayer *_bottomSeparator;
    struct UIEdgeInsets _labelViewInsets;
    struct UIEdgeInsets _separatorInsets;
    UIButton *_actionButton;
    double _actionButtonRightPadding;
    id <IGTitleAndActionCellDelegate> _delegate;
}

+ (double)preferredHeightWithViewModel:(id)arg1 inWidth:(double)arg2;
@property(nonatomic) __weak id <IGTitleAndActionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_titleAndActionCell:(id)arg1 didTapActionButton:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
