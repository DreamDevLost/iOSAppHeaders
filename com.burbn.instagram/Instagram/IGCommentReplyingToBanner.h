//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface IGCommentReplyingToBanner : UIView
{
    UILabel *_titleLabel;
    UIButton *_closeButton;
    id <IGCommentReplyingToBannerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGCommentReplyingToBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapCloseButton;
- (void)updateWithUser:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
