//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface IGSearchBarConfigBuilder : NSObject
{
    double _fontSize;
    double _cornerRadius;
    double _barHeight;
    struct UIEdgeInsets _insets;
    NSString *_placeholder;
    UIColor *_placeholderColor;
    UIColor *_backgroundColor;
    UIColor *_contentViewBackgroundColor;
    UIColor *_textFieldTextColor;
    UIColor *_textFieldTintColor;
    UIColor *_searchIconColor;
    UIColor *_clearIconColor;
    UIColor *_cancelButtonTextColor;
    double _cancelButtonLeftInset;
    double _cancelButtonRightInset;
    long long _rightButtonStyle;
    long long _keyboardAppearance;
    long long _returnKeyType;
    long long _autocorrectionType;
    long long _autocapitalizationType;
}

+ (id)searchBarConfigFromExistingSearchBarConfig:(id)arg1;
+ (id)searchBarConfig;
- (void).cxx_destruct;
- (id)withAutocapitalizationType:(long long)arg1;
- (id)withAutocorrectionType:(long long)arg1;
- (id)withReturnKeyType:(long long)arg1;
- (id)withKeyboardAppearance:(long long)arg1;
- (id)withRightButtonStyle:(long long)arg1;
- (id)withCancelButtonRightInset:(double)arg1;
- (id)withCancelButtonLeftInset:(double)arg1;
- (id)withCancelButtonTextColor:(id)arg1;
- (id)withClearIconColor:(id)arg1;
- (id)withSearchIconColor:(id)arg1;
- (id)withTextFieldTintColor:(id)arg1;
- (id)withTextFieldTextColor:(id)arg1;
- (id)withContentViewBackgroundColor:(id)arg1;
- (id)withBackgroundColor:(id)arg1;
- (id)withPlaceholderColor:(id)arg1;
- (id)withPlaceholder:(id)arg1;
- (id)withInsets:(struct UIEdgeInsets)arg1;
- (id)withBarHeight:(double)arg1;
- (id)withCornerRadius:(double)arg1;
- (id)withFontSize:(double)arg1;
- (id)build;

@end
