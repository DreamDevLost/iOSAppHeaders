//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGRemoteImageView, UIButton, UILabel;

@interface IGQPFullscreenView : UIView
{
    UIButton *_dismissButton;
    IGRemoteImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_separatorLine;
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
    id <IGQPFullscreenViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGQPFullscreenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapSecondaryButton;
- (void)_didTapPrimaryButton;
- (void)_didTapDismissButton;
- (void)layoutSubviews;
- (void)configureViewWithInterstitial:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

