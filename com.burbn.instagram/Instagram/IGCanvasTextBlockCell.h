//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGCanvasTextBlockViewModel, IGCoreTextView;

@interface IGCanvasTextBlockCell : UICollectionViewCell
{
    IGCoreTextView *_coreTextView;
    struct UIEdgeInsets _padding;
    IGCanvasTextBlockViewModel *_model;
}

+ (double)preferedHeightForWidth:(double)arg1 styledString:(id)arg2 insets:(struct UIEdgeInsets)arg3;
@property(readonly, nonatomic) IGCanvasTextBlockViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)configureTextBlock:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
