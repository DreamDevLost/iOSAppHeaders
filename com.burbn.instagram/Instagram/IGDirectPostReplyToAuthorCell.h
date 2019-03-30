//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectMessageCell.h"

@class IGCoreTextView, IGDirectExpiringMediaSeparatorView, IGDirectTextMessageBubbleView, IGImageProgressView, IGVideoIndicatorView, UIImageView;

@interface IGDirectPostReplyToAuthorCell : IGDirectMessageCell
{
    struct CGSize _postContentSize;
    double _dottedLinePadding;
    IGCoreTextView *_titleView;
    IGImageProgressView *_imageView;
    IGDirectTextMessageBubbleView *_textBubbleView;
    IGDirectExpiringMediaSeparatorView *_dottedLineView;
    IGVideoIndicatorView *_videoIndicatorView;
    UIImageView *_sidecarIconView;
    UIImageView *_shoppingIconView;
}

+ (_Bool)needsContainerStyling;
+ (_Bool)needsReactionsView;
- (void).cxx_destruct;
- (struct CGSize)messageContentSize;
- (void)configureWithViewModel:(id)arg1 imageSpecifier:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

