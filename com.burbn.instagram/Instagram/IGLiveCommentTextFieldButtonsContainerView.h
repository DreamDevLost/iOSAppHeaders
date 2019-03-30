//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTapButton, UIButton;

@interface IGLiveCommentTextFieldButtonsContainerView : UIView
{
    id <IGLiveCommentTextFieldButtonsContainerViewDelegate> _delegate;
    UIButton *_moreButton;
    IGTapButton *_postButton;
}

@property(readonly, nonatomic) IGTapButton *postButton; // @synthesize postButton=_postButton;
@property(readonly, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak id <IGLiveCommentTextFieldButtonsContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_postButtonTapped;
- (void)_moreButtonTapped;
- (void)showMoreButton:(_Bool)arg1;
- (void)showPostButton:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

