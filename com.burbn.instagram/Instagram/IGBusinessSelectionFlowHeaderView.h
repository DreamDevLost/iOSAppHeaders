//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, UILabel;

@interface IGBusinessSelectionFlowHeaderView : UIView
{
    _Bool _bottomSeparatorLineHidden;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGCoreTextView *_coreTextView;
    UIView *_footerView;
    UIView *_bottomLine;
}

+ (double)_maxTextWidthWithSize:(struct CGSize)arg1;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) IGCoreTextView *coreTextView; // @synthesize coreTextView=_coreTextView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool bottomSeparatorLineHidden; // @synthesize bottomSeparatorLineHidden=_bottomSeparatorLineHidden;
- (void).cxx_destruct;
- (_Bool)updateWithSubtitle:(id)arg1 headerAvailableSpace:(double)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_footerViewSizeWithWidth:(double)arg1;
- (struct CGSize)_coreTextViewSizeWithWidth:(double)arg1;
- (struct CGSize)_subtitleLabelSizeWithWidth:(double)arg1;
- (struct CGSize)_titleLabelSizeWithWidth:(double)arg1;
- (void)_commonInitWithTitle:(id)arg1;
- (void)_commonInitWithSubtitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 coreTextView:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 subtitle:(id)arg3 footerView:(id)arg4;

@end

