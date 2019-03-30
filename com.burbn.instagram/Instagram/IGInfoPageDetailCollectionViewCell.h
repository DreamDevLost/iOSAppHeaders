//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGChevronTitleButton, NSAttributedString, UIButton, UILabel, UIView;

@interface IGInfoPageDetailCollectionViewCell : UICollectionViewCell
{
    UILabel *_descriptionLabel;
    UILabel *_detailLabel;
    NSAttributedString *_description;
    NSAttributedString *_details;
    long long _detailType;
    IGChevronTitleButton *_hoursTitle;
    UIButton *_detailButton;
    double _xOffset;
    id <IGInfoPageDetailCollectionViewCellDelegate> _delegate;
    UIView *_separatorLine;
}

+ (double)cellHeightForDetailType:(long long)arg1;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) __weak id <IGInfoPageDetailCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_chevronSelected;
- (void)_didSelectLink;
- (void)configureCellWithText:(id)arg1 description:(id)arg2 detailType:(long long)arg3 isLink:(_Bool)arg4 isExpandable:(_Bool)arg5 showSeparatorLine:(_Bool)arg6 xOffset:(double)arg7;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

