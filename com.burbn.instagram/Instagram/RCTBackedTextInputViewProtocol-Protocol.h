//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextInput.h"

@class NSAttributedString, NSString, RCTTextAttributes, UIColor, UIFont, UITextRange, UIView;

@protocol RCTBackedTextInputViewProtocol <UITextInput>
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) RCTTextAttributes *reactTextAttributes;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(nonatomic) __weak id <RCTBackedTextInputDelegate> textInputDelegate;
@property(retain, nonatomic) UIView *inputAccessoryView;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(readonly, nonatomic) _Bool textWasPasted;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *placeholderColor;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIColor *textColor;
- (void)setSelectedTextRange:(UITextRange *)arg1 notifyDelegate:(_Bool)arg2;
- (void)setSelectedTextRange:(UITextRange *)arg1;
@end

