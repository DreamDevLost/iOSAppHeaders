//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDelayedBouncyCollectionViewCell.h"

@class IGGradientView, IGRemoteImageView, UIImageView, UILabel;

@interface IGTVFeedTrayThumbnailCell : IGDelayedBouncyCollectionViewCell
{
    IGGradientView *_bottomLegibilityGradient;
    IGGradientView *_topLegibilityGradient;
    UILabel *_durationLabel;
    UILabel *_titleLabel;
    UILabel *_usernameLabel;
    UIImageView *_verifiedBadgeImageView;
    IGRemoteImageView *_thumbnailImageView;
}

@property(readonly, nonatomic) IGRemoteImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1 durationText:(id)arg2 username:(id)arg3 shouldShowVerifiedBadge:(_Bool)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

