//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGProfilePictureImageView, IGStoryGradientRingView, UIImageView;

@interface IGTVHighlightsTrayCoverImageView : UIView
{
    IGStoryGradientRingView *_gradientRingView;
    UIView *_overlayView;
    UIImageView *_tvIconImageView;
    IGProfilePictureImageView *_coverImageView;
}

@property(readonly, nonatomic) IGProfilePictureImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
