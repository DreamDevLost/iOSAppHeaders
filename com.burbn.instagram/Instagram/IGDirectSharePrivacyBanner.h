//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGImageTitleSubtitleView, IGImageTitleSubtitleViewImageSource, IGImageTitleSubtitleViewLayoutSpec, IGImageTitleSubtitleViewModel, NSString;

@interface IGDirectSharePrivacyBanner : UIView
{
    IGImageTitleSubtitleView *_imageTitleSubtitleView;
    IGImageTitleSubtitleViewImageSource *_imageSource;
    IGImageTitleSubtitleViewLayoutSpec *_layoutSpec;
    IGImageTitleSubtitleViewModel *_viewModel;
    UIView *_bottomBorder;
    NSString *_warningMessage;
}

- (void).cxx_destruct;
- (void)_setupBorder;
- (void)_setupImageTitleSubtitleView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWarningMessage:(id)arg1 withTitle:(id)arg2;
- (void)configureWarningMessage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

