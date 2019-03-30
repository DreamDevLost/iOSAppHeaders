//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTView.h"

#import "RCTBackedTextInputDelegate.h"

@class NSAttributedString, NSNumber, NSString, RCTBridge, RCTEventDispatcher, RCTTextAttributes, RCTTextSelection, UIView<RCTBackedTextInputViewProtocol>;

@interface RCTBaseTextInputView : RCTView <RCTBackedTextInputDelegate>
{
    RCTBridge *_bridge;
    RCTEventDispatcher *_eventDispatcher;
    _Bool _hasInputAccesoryView;
    NSString *_predictedText;
    long long _nativeEventCount;
    _Bool _blurOnSubmit;
    _Bool _selectTextOnFocus;
    _Bool _clearTextOnFocus;
    RCTTextAttributes *_textAttributes;
    CDUnknownBlockType _onContentSizeChange;
    CDUnknownBlockType _onSelectionChange;
    CDUnknownBlockType _onChange;
    CDUnknownBlockType _onTextInput;
    CDUnknownBlockType _onScroll;
    long long _mostRecentEventCount;
    NSNumber *_maxLength;
    NSString *_inputAccessoryViewID;
    struct UIEdgeInsets _reactPaddingInsets;
    struct UIEdgeInsets _reactBorderInsets;
}

@property(copy, nonatomic) NSString *inputAccessoryViewID; // @synthesize inputAccessoryViewID=_inputAccessoryViewID;
@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) _Bool clearTextOnFocus; // @synthesize clearTextOnFocus=_clearTextOnFocus;
@property(nonatomic) _Bool selectTextOnFocus; // @synthesize selectTextOnFocus=_selectTextOnFocus;
@property(nonatomic) _Bool blurOnSubmit; // @synthesize blurOnSubmit=_blurOnSubmit;
@property(nonatomic) long long mostRecentEventCount; // @synthesize mostRecentEventCount=_mostRecentEventCount;
@property(copy, nonatomic) CDUnknownBlockType onScroll; // @synthesize onScroll=_onScroll;
@property(copy, nonatomic) CDUnknownBlockType onTextInput; // @synthesize onTextInput=_onTextInput;
@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(copy, nonatomic) CDUnknownBlockType onSelectionChange; // @synthesize onSelectionChange=_onSelectionChange;
@property(copy, nonatomic) CDUnknownBlockType onContentSizeChange; // @synthesize onContentSizeChange=_onContentSizeChange;
@property(nonatomic) struct UIEdgeInsets reactBorderInsets; // @synthesize reactBorderInsets=_reactBorderInsets;
@property(nonatomic) struct UIEdgeInsets reactPaddingInsets; // @synthesize reactPaddingInsets=_reactPaddingInsets;
@property(retain, nonatomic) RCTTextAttributes *textAttributes; // @synthesize textAttributes=_textAttributes;
- (void).cxx_destruct;
- (void)handleInputAccessoryDoneButton;
- (void)reloadInputViewsIfNecessary;
- (void)setDefaultInputAccessoryView;
- (void)setCustomInputAccessoryViewWithNativeID:(id)arg1;
- (void)didSetProps:(id)arg1;
- (void)didMoveToWindow;
- (void)reactBlur;
- (void)reactFocus;
- (id)reactAccessibilityElement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateLocalData;
- (void)textInputDidChangeSelection;
- (void)textInputDidChange;
- (_Bool)textInputShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)textInputDidReturn;
- (_Bool)textInputShouldReturn;
- (void)textInputDidEndEditing;
- (_Bool)textInputShouldEndEditing;
- (void)textInputDidBeginEditing;
- (_Bool)textInputShouldBeginEditing;
@property(nonatomic) _Bool secureTextEntry;
@property(nonatomic) long long keyboardType;
- (void)setTextContentType:(id)arg1;
@property(copy, nonatomic) RCTTextSelection *selection;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (_Bool)textOf:(id)arg1 equals:(id)arg2;
- (void)enforceTextAttributesIfNeeded;
- (void)didUpdateReactSubviews;
@property(readonly, nonatomic) UIView<RCTBackedTextInputViewProtocol> *backedTextInputView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

