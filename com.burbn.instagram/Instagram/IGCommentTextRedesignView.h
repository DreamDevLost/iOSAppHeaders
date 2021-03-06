//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCommentInnerReplyingToBannerDelegate.h"
#import "IGCommentTextViewProtocol.h"
#import "IGProfilePictureImageViewDelegate.h"

@class IGCommentInnerReplyingToBanner, IGGrowingTextView, IGProfilePictureImageView, IGTapButton, IGUser, NSString, UIButton, UIImageView;

@interface IGCommentTextRedesignView : UIView <IGCommentInnerReplyingToBannerDelegate, IGProfilePictureImageViewDelegate, IGCommentTextViewProtocol>
{
    IGUser *_user;
    IGProfilePictureImageView *_profilePic;
    UIImageView *_roundedBackgroundImageView;
    UIButton *_postButton;
    IGGrowingTextView *_growingTextView;
    UIView *_topLine;
    IGCommentInnerReplyingToBanner *_innerReplyingToBanner;
    _Bool _isShowingInnerReplyingToBanner;
    unsigned long long _currentStyle;
    IGTapButton *_quickReplyButton;
    _Bool _quickReplyEnabled;
    IGTapButton *_highlightedQuickReplyButton;
    id <IGCommentTextRedesignViewDelegate> _delegate;
}

@property(retain, nonatomic) UIView *quickReplyButton; // @synthesize quickReplyButton=_quickReplyButton;
@property(nonatomic) __weak id <IGCommentTextRedesignViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapHighlightedQuickReplyButton;
- (void)_didTapQuickReplyButton;
- (void)_didLongPressProfilePicure:(id)arg1;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (id)autocompleteTextInput;
- (void)insertText:(id)arg1;
- (void)clearText;
- (void)addSendButtonTappedTarget:(id)arg1 action:(SEL)arg2;
- (void)setButtonEnabled:(_Bool)arg1;
- (void)setText:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setTextViewDelegate:(id)arg1;
- (id)textView;
- (void)innerReplyingToBannerDidDismiss:(id)arg1;
- (void)layoutSubviews;
- (void)hideInnerReplyingToBanner;
- (void)showInnerReplyingToBannerWithUser:(id)arg1 hideCloseButton:(_Bool)arg2;
- (void)setAllowsLineBreak:(_Bool)arg1;
- (void)setHighlightedQuickReplyButtonHidden:(_Bool)arg1;
- (void)setQuickReplyEnabled:(_Bool)arg1;
- (void)setSendButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithUser:(id)arg1 containerView:(id)arg2 module:(id)arg3 style:(unsigned long long)arg4 mediaAuthor:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

