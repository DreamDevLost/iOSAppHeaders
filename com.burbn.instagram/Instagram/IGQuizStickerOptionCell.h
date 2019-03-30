//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UITextViewDelegate.h"

@class CAShapeLayer, IGGradientView, IGTextView, NSArray, NSString, UIView;

@interface IGQuizStickerOptionCell : UICollectionViewCell <UITextViewDelegate>
{
    IGTextView *_textView;
    IGGradientView *_borderGradientView;
    CAShapeLayer *_borderMaskLayer;
    _Bool _editable;
    _Bool _dashedBorder;
    id <IGQuizStickerOptionCellDelegate> _delegate;
    NSString *_placeholderText;
    UIView *_accessoryView;
    NSArray *_borderColors;
}

@property(nonatomic) _Bool dashedBorder; // @synthesize dashedBorder=_dashedBorder;
@property(retain, nonatomic) NSArray *borderColors; // @synthesize borderColors=_borderColors;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) __weak id <IGQuizStickerOptionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (void)prepareForReuse;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

