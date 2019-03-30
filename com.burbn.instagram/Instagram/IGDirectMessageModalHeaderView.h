//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGDirectMessageModalTitleViewDelgate.h"

@class CAShapeLayer, IGDirectAvatarView, IGDirectMessageModalShareContent, IGDirectMessageModalTitleView, IGRemoteImageView, NSString;

@interface IGDirectMessageModalHeaderView : UIView <IGDirectMessageModalTitleViewDelgate>
{
    CAShapeLayer *_backgroundLayer;
    IGDirectAvatarView *_avatarView;
    IGRemoteImageView *_remoteImageView;
    CAShapeLayer *_remoteImageViewMask;
    IGDirectMessageModalShareContent *_shareContent;
    IGDirectMessageModalTitleView *_titleView;
    id <IGDirectMessageModalHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectMessageModalHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)titleViewDidTapTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutLargeAvatarView;
- (void)layoutSubviews;
- (void)configureWithUser:(id)arg1 content:(id)arg2 module:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
