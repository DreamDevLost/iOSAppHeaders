//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGDirectAudioProgressViewModel, IGDirectAudioWaveformView;

@interface IGDirectAudioProgressView : UIView
{
    IGDirectAudioWaveformView *_waveformView;
    UIView *_progressView;
    IGDirectAudioProgressViewModel *_audioProgressViewModel;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) IGDirectAudioProgressViewModel *audioProgressViewModel; // @synthesize audioProgressViewModel=_audioProgressViewModel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateColor;
- (void)_updateWaveform;
- (id)initWithFrame:(struct CGRect)arg1;

@end

