//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGLabel;

@interface IGPBIAProxyProfileHeaderCell : UICollectionViewCell
{
    IGLabel *_descriptionLabel;
    IGLabel *_actionLabel;
    id <IGProfileLayoutMetrics> _layoutMetrics;
    id <IGPBIAProxyProfileHeaderCellDelegate> _delegate;
    _Bool _enableActionButton;
}

@property(nonatomic, getter=isActionButtonEnabled) _Bool enableActionButton; // @synthesize enableActionButton=_enableActionButton;
- (void).cxx_destruct;
- (void)_actionButtonDidTap:(id)arg1;
- (void)configureWithViewModel:(id)arg1 layoutMetrics:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
