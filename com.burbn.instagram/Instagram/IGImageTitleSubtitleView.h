//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, IGDirectAvatarView, IGImageTitleSubtitleViewLayoutSpec, IGImageTitleSubtitleViewModel, UIImageView, UILabel;

@interface IGImageTitleSubtitleView : UIView
{
    IGDirectAvatarView *_avatarImageView;
    UIImageView *_imageView;
    CAShapeLayer *_ringLayer;
    IGImageTitleSubtitleViewModel *_viewModel;
    UIView *_accessoryView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_subtitleAccessoryView;
    IGImageTitleSubtitleViewLayoutSpec *_layoutSpec;
}

+ (struct CGSize)preferredSizeForConstrainingSize:(struct CGSize)arg1 viewModel:(id)arg2 accessoryViewWidth:(double)arg3 subtitleAccessoryViewWidth:(double)arg4;
@property(readonly, nonatomic) IGImageTitleSubtitleViewLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(retain, nonatomic) UIView *subtitleAccessoryView; // @synthesize subtitleAccessoryView=_subtitleAccessoryView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
