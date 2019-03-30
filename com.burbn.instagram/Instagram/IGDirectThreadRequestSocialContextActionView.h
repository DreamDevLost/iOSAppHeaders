//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGDirectThreadRequestSplitButtonViewDelegate.h"

@class IGDirectThreadRequestSplitButtonView, NSString, UILabel;

@interface IGDirectThreadRequestSocialContextActionView : UIView <IGDirectThreadRequestSplitButtonViewDelegate>
{
    id <IGDirectThreadRequestSocialContextActionViewDelegate> _delegate;
    NSString *_username;
    IGDirectThreadRequestSplitButtonView *_splitButtonView;
    UIView *_labelContainerView;
    UILabel *_disclaimerLabel;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)directThreadRequestSplitButtonView:(id)arg1 didTapDestructiveButtonWithTitle:(id)arg2;
- (void)directThreadRequestSplitButtonView:(id)arg1 didTapPrimaryButtonWithTitle:(id)arg2;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 username:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

