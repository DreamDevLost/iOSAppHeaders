//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDelayedBouncyCollectionViewCell.h"

@class UILabel, UIView;

@interface IGTVChannelTitleCell : IGDelayedBouncyCollectionViewCell
{
    UIView *_bottomBorder;
    _Bool _active;
    _Bool _shouldShowUnderlineWhenActive;
    UILabel *_label;
}

+ (double)preferredWidthForText:(id)arg1;
@property(nonatomic) _Bool shouldShowUnderlineWhenActive; // @synthesize shouldShowUnderlineWhenActive=_shouldShowUnderlineWhenActive;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)_updateActiveStyle;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

