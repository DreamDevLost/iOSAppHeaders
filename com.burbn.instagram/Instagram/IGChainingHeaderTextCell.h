//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel;

@interface IGChainingHeaderTextCell : UICollectionViewCell
{
    UILabel *_headerTextLabel;
    id <IGFeedTheme> _theme;
}

+ (double)desiredHeightForModel:(id)arg1 atWidth:(double)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateTheme:(id)arg1;
- (void)configureWithModel:(id)arg1 itemConfiguration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

