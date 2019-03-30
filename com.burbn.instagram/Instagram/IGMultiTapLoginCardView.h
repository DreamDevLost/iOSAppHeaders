//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGWelcomeViewBackgroundView, UIActivityIndicatorView, UIButton, UICollectionView, UIImageView;

@interface IGMultiTapLoginCardView : UIView
{
    long long _cellType;
    IGWelcomeViewBackgroundView *_backgroundView;
    UIImageView *_logoView;
    UIButton *_editAccountsButton;
    UIActivityIndicatorView *_spinner;
    UIButton *_doneButton;
    _Bool _showEditAccounts;
    _Bool _hasDroppedFooterView;
    id <IGMultiTapLoginCardViewDelegate> _delegate;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <IGMultiTapLoginCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetView;
- (void)performLoginAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)showDoneButton:(_Bool)arg1;
- (void)_didTapSignUpButton;
- (void)_didTapSwitchAccountButton;
- (void)_didTapDoneButton;
- (void)_didTapEditAccountsButton;
- (double)_unselectedItemWidth;
- (double)_selectedItemWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 cellType:(long long)arg2 showEditAccounts:(_Bool)arg3;

@end

