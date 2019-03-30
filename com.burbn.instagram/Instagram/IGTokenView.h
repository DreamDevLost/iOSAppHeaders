//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIKeyInput.h"
#import "UITextInputTraits.h"

@class IGToken, NSString, UITextInputPasswordRules;

@interface IGTokenView : UIView <UIKeyInput, UITextInputTraits>
{
    IGToken *_token;
    id <IGTokenViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTokenViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(nonatomic) long long autocorrectionType;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (void)setSelected:(_Bool)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)initWithToken:(id)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
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
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

