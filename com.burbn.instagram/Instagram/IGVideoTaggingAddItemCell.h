//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, UIImageView, UILabel;

@interface IGVideoTaggingAddItemCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIImageView *_plusButton;
    CALayer *_bottomBorderLayer;
    long long _taggingMode;
    id <IGVideoTaggingAddItemCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGVideoTaggingAddItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long taggingMode; // @synthesize taggingMode=_taggingMode;
- (void).cxx_destruct;
- (void)_onTagViewTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

