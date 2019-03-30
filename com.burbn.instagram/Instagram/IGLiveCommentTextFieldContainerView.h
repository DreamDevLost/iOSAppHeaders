//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGLiveCommentTextFieldButtonsContainerViewDelegate.h"
#import "UITextFieldDelegate.h"

@class IGLiveCommentTextFieldButtonsContainerView, IGTextField, NSString, UILabel;

@interface IGLiveCommentTextFieldContainerView : UIView <UITextFieldDelegate, IGLiveCommentTextFieldButtonsContainerViewDelegate>
{
    _Bool _commentsDisabled;
    _Bool _shouldShowMoreButton;
    id <IGLiveCommentTextFieldContainerViewDelegate> _delegate;
    UILabel *_commentsDisabledLabel;
    IGLiveCommentTextFieldButtonsContainerView *_textFieldButtonsContainer;
    IGTextField *_commentTextField;
}

+ (double)_commentTextFieldHeight;
+ (id)_commentTextFieldFont;
@property(nonatomic) _Bool shouldShowMoreButton; // @synthesize shouldShowMoreButton=_shouldShowMoreButton;
@property(readonly, nonatomic) IGTextField *commentTextField; // @synthesize commentTextField=_commentTextField;
@property(readonly, nonatomic) IGLiveCommentTextFieldButtonsContainerView *textFieldButtonsContainer; // @synthesize textFieldButtonsContainer=_textFieldButtonsContainer;
@property(readonly, nonatomic) UILabel *commentsDisabledLabel; // @synthesize commentsDisabledLabel=_commentsDisabledLabel;
@property(nonatomic) __weak id <IGLiveCommentTextFieldContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool commentsDisabled; // @synthesize commentsDisabled=_commentsDisabled;
- (void).cxx_destruct;
- (_Bool)_commentTextFieldCanPost;
- (void)postButtonTappedInCommentTextFieldButtonsContainerView:(id)arg1;
- (void)moreButtonTappedInCommentTextFieldButtonsContainerView:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_configureButtonVisibilities;
- (void)showMoreButton:(_Bool)arg1;
- (_Bool)shouldShowExpanded:(_Bool)arg1;
- (void)showCommentTextField;
- (_Bool)isTextFieldEditing;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

