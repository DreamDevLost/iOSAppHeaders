//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGOneTapSingleAccountLoginView, IGWelcomeViewBackgroundView, UIButton, UITableView;

@interface IGOneTapLoginView : UIView
{
    id <IGOneTapLoginViewDelegate><UITableViewDelegate><UITableViewDataSource><IGCoreTextLinkHandler> _delegate;
    _Bool _isEditing;
    UITableView *_accountsTableView;
    IGCoreTextView *_termView;
    IGWelcomeViewBackgroundView *_backgroundView;
    IGOneTapSingleAccountLoginView *_singleAccountLoginView;
    UIButton *_editAccountsButton;
}

@property(retain, nonatomic) UIButton *editAccountsButton; // @synthesize editAccountsButton=_editAccountsButton;
@property(retain, nonatomic) IGOneTapSingleAccountLoginView *singleAccountLoginView; // @synthesize singleAccountLoginView=_singleAccountLoginView;
@property(retain, nonatomic) IGWelcomeViewBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) IGCoreTextView *termView; // @synthesize termView=_termView;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UITableView *accountsTableView; // @synthesize accountsTableView=_accountsTableView;
- (void).cxx_destruct;
- (void)_didTapEditAccountsButton;
- (void)_didTapOneTapLoginLoginButton;
- (void)_didTapSignUpButton;
- (void)_didTapSwitchAccountButton;
@property(readonly, nonatomic) UIButton *signUpButton;
@property(readonly, nonatomic) UIButton *switchAccountButton;
- (void)setIsLoading:(_Bool)arg1;
- (void)_setUsers:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 setupRainbowView:(_Bool)arg2 users:(id)arg3 module:(id)arg4 delegate:(id)arg5;

@end
