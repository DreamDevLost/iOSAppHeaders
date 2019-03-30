//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, IGRemoteImageView, NSURL, UIImage;

@interface IGStoryMusicBrowserRoundedImageView : UIView
{
    CALayer *_largeBlurRadiusShadowLayer;
    CALayer *_smallBlurRadiusShadowLayer;
    IGRemoteImageView *_imageView;
    NSURL *_imageURL;
}

@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)outlinePath;
@property(nonatomic) _Bool shadowHidden;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
@property(retain, nonatomic) UIImage *image;
@property(nonatomic) double cornerRadius;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

