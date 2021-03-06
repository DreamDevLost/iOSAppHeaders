//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGEmojiFitzpatrickController, IGEmojiFitzpatrickTooltipPresenter, NSArray;

@interface IGCommentEmojiSelectionView : UIView
{
    unsigned long long _buttonCountLimit;
    NSArray *_buttons;
    IGEmojiFitzpatrickController *_fitzpatrickController;
    IGEmojiFitzpatrickTooltipPresenter *_fitzpatrickPresenter;
    UIView *_containerView;
    id <IGCommentEmojiSelectionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGCommentEmojiSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapEmojiButton:(id)arg1;
- (void)_didLongPressEmojiButton:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithContainerView:(id)arg1 emojis:(id)arg2 buttonCountLimit:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

