//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTapButton.h"

@class IGProgressRingView, IGStoryMusicAnimatedAudioIndicatorBars, IGStoryMusicProgressLoadingMask, UIView;

@interface IGStoryMusicProgressButton : IGTapButton
{
    IGStoryMusicAnimatedAudioIndicatorBars *_animatedAudioBars;
    IGStoryMusicProgressLoadingMask *_loadingMask;
    UIView *_progressRingContentView;
    IGProgressRingView *_ringView;
    IGProgressRingView *_backgroundRingView;
}

- (void).cxx_destruct;
- (void)setLoading:(_Bool)arg1;
- (void)setAnimating:(_Bool)arg1;
- (void)setProgress:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end
