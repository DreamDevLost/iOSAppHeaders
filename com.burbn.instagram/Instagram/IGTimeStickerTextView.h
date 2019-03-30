//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, UIBezierPath, UILabel;

@interface IGTimeStickerTextView : UIView
{
    UIBezierPath *_cachedOutlinePath;
    _Bool _outlinePathComputationInProgress;
    UILabel *_timeLabel;
    UILabel *_accessoryLabel;
    NSDictionary *_accessoryLabelAttributes;
}

@property(readonly, nonatomic) NSDictionary *accessoryLabelAttributes; // @synthesize accessoryLabelAttributes=_accessoryLabelAttributes;
@property(readonly, nonatomic) UILabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (id)outlinePath;
- (void)_recomputeOutlinePath;
- (void)configureWithDate:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setUpAccessoryLabel;
- (void)_setUpTimeLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
