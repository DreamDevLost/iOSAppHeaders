//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCoreTextLinkHandler.h"

@class IGCoreTextView, NSString;

@interface IGPromoteFeedbackTermsView : UIView <IGCoreTextLinkHandler>
{
    IGCoreTextView *_termsTextView;
    id <IGPromoteFeedbackTermsViewLinkHandler> _linkHandler;
}

@property(nonatomic) __weak id <IGPromoteFeedbackTermsViewLinkHandler> linkHandler; // @synthesize linkHandler=_linkHandler;
- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)_sizeForTermsTextView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

