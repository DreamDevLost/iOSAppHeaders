//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGVideoPlaybackView, UIImageView;

@interface IGTVCoverPickerPreviewPlaybackContainerView : UIView
{
    long long _mode;
    IGVideoPlaybackView *_videoPlaybackView;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) IGVideoPlaybackView *videoPlaybackView; // @synthesize videoPlaybackView=_videoPlaybackView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

