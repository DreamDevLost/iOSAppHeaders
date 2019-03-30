//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGCanvasButtonViewModel, IGCoreTextView, UITapGestureRecognizer, UIView;

@interface IGCanvasButtonCell : UICollectionViewCell
{
    IGCoreTextView *_canvasButton;
    UIView *_backgroundView;
    struct UIEdgeInsets _padding;
    id <IGCanvasButtonCellDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
    IGCanvasButtonViewModel *_model;
}

+ (double)preferedHeightForWidth:(double)arg1 styledString:(id)arg2 insets:(struct UIEdgeInsets)arg3;
@property(readonly, nonatomic) IGCanvasButtonViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)_setBorderWithStyle:(unsigned long long)arg1 color:(id)arg2;
- (void)_didTapButton:(id)arg1;
- (void)configureButton:(id)arg1 delegate:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

