//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectMessageCell.h"

@class IGCoreTextView, IGGradientView, IGLoadingRingView, UIImageView, UIView;

@interface IGDirectVisualMessageTombstoneCell : IGDirectMessageCell
{
    UIView *_bubbleView;
    IGGradientView *_gradientView;
    struct CGSize _bubbleSize;
    struct UIEdgeInsets _bubbleInsets;
    UIImageView *_imageView;
    struct CGSize _imageSize;
    double _imageToTextPadding;
    IGLoadingRingView *_loadingRingView;
    IGCoreTextView *_textView;
    struct CGSize _styledTextSize;
}

+ (_Bool)needsContainerStyling;
- (void).cxx_destruct;
- (struct CGSize)messageContentSize;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

