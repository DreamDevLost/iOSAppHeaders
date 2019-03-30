//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableViewCell.h"

#import "UITextViewDelegate.h"

@class IGTableLayoutSpec, NSString, UITextView;

@interface IGSimpleTextViewCell : IGTableViewCell <UITextViewDelegate>
{
    IGTableLayoutSpec *_tableInterface;
    id <IGSimpleTextViewCellDelegate> _delegate;
    NSString *_placeholderText;
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) __weak id <IGSimpleTextViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateTextViewTextColor;
- (_Bool)_textIsPlaceholder;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

