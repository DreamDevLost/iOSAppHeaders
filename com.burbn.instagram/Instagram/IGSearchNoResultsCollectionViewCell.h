//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel, UIView;

@interface IGSearchNoResultsCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIView *_separatorView;
    _Bool _useNewDesign;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureNoResultWithMessage:(id)arg1 useNewDesign:(_Bool)arg2 textColor:(id)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

