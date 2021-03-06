//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGAnimatedImageViewDelegate.h"

@class IGAnimatedImageView, IGCircularProgressView;

@interface IGDirectAnimatedMediaView : UIView <IGAnimatedImageViewDelegate>
{
    IGAnimatedImageView *_animatedImageView;
    IGCircularProgressView *_progressView;
}

- (void).cxx_destruct;
- (void)animatedImageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)reset;
- (void)configureWithURL:(id)arg1;
- (void)_setupAnimatedImageView;
- (void)_setupProgressView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

