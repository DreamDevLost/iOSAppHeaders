//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGSuggestionsUnitHeaderViewModel, UILabel;

@interface IGSuggestionsUnitHeaderCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGSuggestionsUnitHeaderViewModel *_model;
}

+ (double)_heightForTextLabelWithCellWidth:(double)arg1 text:(id)arg2 font:(id)arg3;
+ (double)preferredHeightForModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
