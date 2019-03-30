//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCoreTextLinkHandler.h"

@class IGCoreTextView, IGGDPRConsentLayoutSpec, IGGDPRConsentMultiTextView, NSString;

@interface IGGDPRConsentTermContentView : UIView <IGCoreTextLinkHandler>
{
    IGCoreTextView *_contentTitle;
    IGGDPRConsentMultiTextView *_contentTextView;
    IGGDPRConsentMultiTextView *_optionalContentTextView;
    IGCoreTextView *_linkText;
    IGGDPRConsentLayoutSpec *_layoutSpec;
    id <IGGDPRConsentTermContentDelegate> _delegate;
}

@property(nonatomic) __weak id <IGGDPRConsentTermContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)showOptionalContent:(_Bool)arg1;
- (void)configureViewWithTosVersion:(id)arg1 TitleText:(id)arg2 contentData:(id)arg3 optionalContentData:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
