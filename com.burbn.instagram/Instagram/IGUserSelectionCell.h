//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGImageTitleSubtitleView, IGUserSelectionViewModel;

@interface IGUserSelectionCell : UICollectionViewCell
{
    IGImageTitleSubtitleView *_imageTitleSubtitleView;
    IGUserSelectionViewModel *_viewModel;
    _Bool _isSelected;
}

+ (double)preferredHeight;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

