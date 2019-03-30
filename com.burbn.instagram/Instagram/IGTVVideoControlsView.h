//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTVPlayPauseButton, IGTVProgressScrubber, UIButton;

@interface IGTVVideoControlsView : UIView
{
    _Bool _showsCTAButton;
    _Bool _showsPlayPauseButton;
    _Bool _showsSkipLabel;
    id <IGTVVideoControlsViewDelegate> _delegate;
    IGTVProgressScrubber *_progressScrubber;
    UIButton *_ctaButton;
    IGTVPlayPauseButton *_playPauseButton;
    UIButton *_durationButton;
    double _duration;
    double _skipDuration;
}

@property(nonatomic) _Bool showsSkipLabel; // @synthesize showsSkipLabel=_showsSkipLabel;
@property(nonatomic) _Bool showsPlayPauseButton; // @synthesize showsPlayPauseButton=_showsPlayPauseButton;
@property(nonatomic) _Bool showsCTAButton; // @synthesize showsCTAButton=_showsCTAButton;
@property(nonatomic) double skipDuration; // @synthesize skipDuration=_skipDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) UIButton *durationButton; // @synthesize durationButton=_durationButton;
@property(readonly, nonatomic) IGTVPlayPauseButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) UIButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(readonly, nonatomic) IGTVProgressScrubber *progressScrubber; // @synthesize progressScrubber=_progressScrubber;
@property(nonatomic) __weak id <IGTVVideoControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_skipTapped:(id)arg1;
- (void)_ctaTapped:(id)arg1;
- (void)_playPauseTapped:(id)arg1;
- (void)_scrubbingEnded:(id)arg1;
- (void)_scrubbingChanged:(id)arg1;
- (void)_scrubbingBegan:(id)arg1;
- (void)_updateSkipGestureEnabled;
- (void)_updateDurationLabel;
- (void)layoutSubviews;
- (struct UIEdgeInsets)scrubberInsets;
- (void)setTintColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

