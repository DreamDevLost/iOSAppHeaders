//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBouncyButton.h"

@class IGRemoteImageView, NSURL, UIImageView, UILabel;

@interface IGQuestionStickerResponseShareButton : IGBouncyButton
{
    IGRemoteImageView *_profilePictureImageView;
    UIImageView *_badgeImageView;
    UILabel *_label;
    NSURL *_profilePictureURL;
}

@property(retain, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

