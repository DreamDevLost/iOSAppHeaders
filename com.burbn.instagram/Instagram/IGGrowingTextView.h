//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGAutocompleteControllerTextInput.h"
#import "UITextViewDelegate.h"

@class IGTableLayoutSpec, NSAttributedString, NSString, UIColor, UIFont, UIImageView, UILabel, UITextInputPasswordRules, UITextView;

@interface IGGrowingTextView : UIView <UITextViewDelegate, IGAutocompleteControllerTextInput>
{
    double _minHeight;
    double _maxHeight;
    struct CGPoint _contentOffset;
    _Bool _allowScroll;
    _Bool _needsToUpdateConstraints;
    IGTableLayoutSpec *_tableInterface;
    UILabel *_leftLabel;
    UIView *_underlineView;
    _Bool _allowsLineBreak;
    _Bool _isListRedesignEnabled;
    _Bool _showUnderline;
    id <IGGrowingTextViewDelegate> _delegate;
    UIImageView *_imageView;
    NSString *_labelText;
    UITextView *_internalTextView;
    long long _maxNumberOfLines;
    NSString *_placeholderText;
    UIColor *_placeholderTextColor;
    UILabel *_placeholder;
}

@property(retain, nonatomic) UILabel *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool showUnderline; // @synthesize showUnderline=_showUnderline;
@property(nonatomic) _Bool isListRedesignEnabled; // @synthesize isListRedesignEnabled=_isListRedesignEnabled;
@property(copy, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) _Bool allowsLineBreak; // @synthesize allowsLineBreak=_allowsLineBreak;
@property(nonatomic) long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
@property(retain, nonatomic) UITextView *internalTextView; // @synthesize internalTextView=_internalTextView;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <IGGrowingTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)inputTextView;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)beginningOfDocument;
- (struct _NSRange)selectedRange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)_configureUnderlineView;
- (void)setBackgroundColor:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) long long keyboardType;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTextView;
- (void)_updateSizeConstraints;
- (double)_heightForText:(id)arg1 inWidth:(double)arg2;
- (double)_heightForText:(id)arg1;
- (void)_updateInternalTextViewInsets;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

