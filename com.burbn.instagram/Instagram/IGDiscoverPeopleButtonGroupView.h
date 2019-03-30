//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIControl;

@interface IGDiscoverPeopleButtonGroupView : UIView
{
    _Bool _followingVisible;
    _Bool _showDismissButton;
    double _horizontalPadding;
    UIControl *_followButton;
    UIControl *_followingButton;
    UIControl *_requestedButton;
    UIButton *_dismissXIconButton;
    _Bool _usingRequestButton;
    id <IGDiscoverPeopleButtonGroupViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDiscoverPeopleButtonGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isUsingRequestButton) _Bool usingRequestButton; // @synthesize usingRequestButton=_usingRequestButton;
- (void).cxx_destruct;
- (void)_onFollowingButtonTapped:(id)arg1;
- (void)_onDismissButtonTapped:(id)arg1;
- (void)_onFollowButtonTapped:(id)arg1;
- (void)setFollowingVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithShouldShowDismissButton:(_Bool)arg1 horizontalPadding:(double)arg2;

@end

