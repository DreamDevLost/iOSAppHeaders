//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCoreTextLinkHandler.h"
#import "IGGDPRConsentBottomButtonViewDelegate.h"

@class IGCoreTextView, IGGDPRConsentBottomButtonView, IGGDPRConsentLayoutSpec, NSString, UIImageView, UIScrollView;

@interface IGGDPRConsentCompleteView : UIView <IGCoreTextLinkHandler, IGGDPRConsentBottomButtonViewDelegate>
{
    UIScrollView *_contentView;
    UIImageView *_imageView;
    IGCoreTextView *_contentTitle;
    IGCoreTextView *_contentTextView;
    IGGDPRConsentBottomButtonView *_bottomButtonView;
    IGGDPRConsentLayoutSpec *_layoutSpec;
    id <IGGDPRConsentCompleteViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGGDPRConsentCompleteViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_contentHeight;
- (void)GDPRConsentBottomButtonViewDidTapSecondaryBottomButton;
- (void)GDPRConsentBottomButtonViewDidTapPrimaryBottomButton:(_Bool)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)configureViewWithTitleText:(id)arg1 contentText:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
