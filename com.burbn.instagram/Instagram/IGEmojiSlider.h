//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "IGCustomSliderDelegate.h"

@class IGCustomSlider, NSString, UIColor, UILabel, UIView;

@interface IGEmojiSlider : UIControl <IGCustomSliderDelegate>
{
    IGCustomSlider *_slider;
    double _emojiSize;
    UILabel *_thumbView;
    UIView *_maximumTrackView;
    id <IGEmojiSliderDelegate> _delegate;
    NSString *_emojiUnicode;
    long long _trackStyle;
}

@property(nonatomic) long long trackStyle; // @synthesize trackStyle=_trackStyle;
@property(retain, nonatomic) UILabel *thumbView; // @synthesize thumbView=_thumbView;
@property(copy, nonatomic) NSString *emojiUnicode; // @synthesize emojiUnicode=_emojiUnicode;
@property(nonatomic) __weak id <IGEmojiSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_configureMinimumTrackView;
- (void)sliderDidReceiveTapOnThumb:(id)arg1;
- (void)sliderDidEndSliding:(id)arg1;
- (void)sliderDidBeginSliding:(id)arg1;
- (void)sliderDidChangeValue:(id)arg1;
@property(nonatomic) double minimumTrackViewWidthExpansion;
@property(retain, nonatomic) UIColor *maximumTrackColor;
- (struct CGRect)averageVoteThumbRectForValue:(double)arg1;
@property(readonly, nonatomic) struct CGRect emojiThumbRect;
@property(nonatomic) double value;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 emojiSize:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

