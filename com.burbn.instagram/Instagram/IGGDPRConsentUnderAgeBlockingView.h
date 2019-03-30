//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGGDPRConsentBottomButtonViewDelegate.h"

@class IGCoreTextView, IGGDPRConsentBottomButtonView, IGGDPRConsentLayoutSpec, UIImageView, UILabel;

@interface IGGDPRConsentUnderAgeBlockingView : UIView <IGGDPRConsentBottomButtonViewDelegate>
{
    UIImageView *_iconView;
    IGCoreTextView *_contentTitle;
    IGCoreTextView *_contentTextView;
    UILabel *_separatorLineLabel;
    UIView *_contentView;
    IGGDPRConsentBottomButtonView *_okButtonView;
    IGGDPRConsentLayoutSpec *_layoutSpec;
    id <IGGDPRConsentUnderAgeBlockingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGGDPRConsentUnderAgeBlockingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)GDPRConsentBottomButtonViewDidTapSecondaryBottomButton;
- (void)GDPRConsentBottomButtonViewDidTapPrimaryBottomButton:(_Bool)arg1;
- (void)configureWithTitleText:(id)arg1 contentText:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2 delegate:(id)arg3;

@end
