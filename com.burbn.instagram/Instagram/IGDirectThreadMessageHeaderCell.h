//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel;

@interface IGDirectThreadMessageHeaderCell : UICollectionViewCell
{
    UILabel *_usernameLabel;
    UILabel *_timestampLabel;
    double _sideMargin;
    unsigned long long _alignment;
}

+ (double)heightForViewModel:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

