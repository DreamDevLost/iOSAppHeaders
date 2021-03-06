//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class IGTapButton, NSAttributedString, UILabel;

@interface IGStoryAdsOptInTextView : UIControl
{
    IGTapButton *_optInButton;
    UILabel *_durationLabel;
    NSAttributedString *_finalStateText;
    NSAttributedString *_initialStateText;
    _Bool _isStoryAdsLongVideo;
    _Bool _isStoryAdsCarouselOptIn;
    id <IGStoryAdsOptInTextViewDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool isStoryAdsCarouselOptIn; // @synthesize isStoryAdsCarouselOptIn=_isStoryAdsCarouselOptIn;
@property(readonly, nonatomic) _Bool isStoryAdsLongVideo; // @synthesize isStoryAdsLongVideo=_isStoryAdsLongVideo;
@property(nonatomic) __weak id <IGStoryAdsOptInTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapOptInButton;
- (void)updateTimeLeft:(double)arg1;
- (void)configureWithSponsoredText:(id)arg1 isStoryAdsLongVideo:(_Bool)arg2 storyCarouselRenderingType:(long long)arg3 isExpanded:(_Bool)arg4 videoDuration:(double)arg5 numberOfStoryItems:(unsigned long long)arg6;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

