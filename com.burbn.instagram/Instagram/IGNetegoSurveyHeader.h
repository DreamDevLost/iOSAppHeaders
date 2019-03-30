//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "IGFeedItemHeaderAvatarViewDelegate.h"

@class IGFeedItemHeaderAvatarView, IGTapButton, NSString, UIButton, UILabel;

@interface IGNetegoSurveyHeader : UICollectionReusableView <IGFeedItemHeaderAvatarViewDelegate>
{
    IGFeedItemHeaderAvatarView *_avatar;
    IGTapButton *_usernameButton;
    UILabel *_introLabel;
    UILabel *_subtitleLabel;
    UIButton *_moreButton;
    id <IGNetegoSurveyHeaderDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)didTapAvatarView:(id)arg1;
- (void)_onMoreButtonTapped:(id)arg1;
- (void)_onUsernameTapped;
- (void)configureWithUser:(id)arg1 subtitle:(id)arg2 delegate:(id)arg3 module:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

