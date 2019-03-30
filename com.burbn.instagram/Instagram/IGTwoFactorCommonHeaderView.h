//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCoreTextLinkHandler.h"

@class IGCoreTextView, NSString, UILabel;

@interface IGTwoFactorCommonHeaderView : UIView <IGCoreTextLinkHandler>
{
    UILabel *_headerLabel;
    IGCoreTextView *_contentLinkView;
    IGCoreTextView *_linkView;
    id <IGTwoFactorCommonHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTwoFactorCommonHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateContentText:(id)arg1;
- (void)configureWithHeaderText:(id)arg1 contentText:(id)arg2 linkViewText:(id)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

