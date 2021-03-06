//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGSuperCategoryViewModel, UIImageView, UILabel;

@interface IGSuperCategoryCell : UICollectionViewCell
{
    UILabel *_title;
    UILabel *_subtitle;
    UIImageView *_imageView;
    IGSuperCategoryViewModel *_viewModel;
}

- (void).cxx_destruct;
- (struct CGSize)_subtitleViewSize:(double)arg1;
- (struct CGSize)_titleViewSize:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

