//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAutocompleteControllerTextInput.h"
#import "UITextViewDelegate.h"

@class NSAttributedString, NSString, UIFont, UILabel, UITextInputPasswordRules, UITextView;

@interface IGEditPostTextViewController : UIViewController <UITextViewDelegate, IGAutocompleteControllerTextInput>
{
    UIFont *_defaultFont;
    double _horizontalTextContainerPadding;
    double _extraBottomPadding;
    id <IGEditPostTextViewControllerDelegate> _delegate;
    UITextView *_textView;
    UILabel *_placeholderLabel;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <IGEditPostTextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)inputTextView;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)beginningOfDocument;
- (id)accessibilityValue;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)updateViewHeight;
- (double)_textHeightForWidth:(double)arg1;
- (double)textContentLayoutHeightForWidth:(double)arg1;
- (double)textContentLayoutHeight;
@property(nonatomic) long long spellCheckingType;
- (void)beginEditing;
@property(nonatomic) struct _NSRange selectedRange;
- (void)_updatePlaceholderVisibility;
@property(copy, nonatomic) NSString *placeholderText;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (void)clearText;
- (struct CGRect)caretRect;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@property(readonly, nonatomic) _Bool isEditingText;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (double)leadingHeight;
- (void)dealloc;
- (id)initWithDefaultFont:(id)arg1 horizontalTextContainerPadding:(double)arg2 extraBottomPadding:(double)arg3;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end
