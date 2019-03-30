//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGCoreTextView, UILabel;

@interface IGShoppingShippingAndReturnsSectionCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_contentTextLabel;
    IGCoreTextView *_styledStringTextView;
}

+ (double)preferredHeightForWidth:(double)arg1 title:(id)arg2 text:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler;
- (void)configureWithTitle:(id)arg1 styledString:(id)arg2;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

