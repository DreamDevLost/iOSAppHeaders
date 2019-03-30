//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableViewCell.h"

#import "IGBusinessConversionEditableCell.h"
#import "IGTextFieldDelegate.h"

@class IGTextField, NSIndexPath, NSString, UIImageView, UILabel, UIView;

@interface IGBusinessConversionTitledInputCell : IGTableViewCell <IGTextFieldDelegate, IGBusinessConversionEditableCell>
{
    UIView *_textContainerView;
    UIView *_bottomLine;
    UIImageView *_inputStateImageView;
    _Bool _needToShowTitleAnimation;
    _Bool _shouldShowBottomSeparator;
    UILabel *_titleLabel;
    IGTextField *_textField;
    NSIndexPath *dataKey;
    id <IGBusinessConversionEditableCellDelegate> delegate;
    long long _maxCharacterLimit;
    NSString *_errorMessage;
    NSString *_title;
}

+ (double)_fullWidth;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) _Bool shouldShowBottomSeparator; // @synthesize shouldShowBottomSeparator=_shouldShowBottomSeparator;
@property(nonatomic) long long maxCharacterLimit; // @synthesize maxCharacterLimit=_maxCharacterLimit;
@property(nonatomic) __weak id <IGBusinessConversionEditableCellDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSIndexPath *dataKey; // @synthesize dataKey;
@property(retain, nonatomic) IGTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_animateTitleUpdate:(id)arg1;
- (struct CGSize)_sizeForTitle:(id)arg1;
- (double)_paddingForAccessory;
- (void)_setTitle:(id)arg1 inputText:(id)arg2;
- (void)showSpinnerAtRight;
- (void)showAcceptedIcon;
- (void)showErrorIcon;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
