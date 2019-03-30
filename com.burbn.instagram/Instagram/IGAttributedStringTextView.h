//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class IGAttributedStringTextViewConfiguration, NSAttributedString, NSString, UITextView;

@interface IGAttributedStringTextView : UIView <UIGestureRecognizerDelegate>
{
    UITextView *_textView;
    IGAttributedStringTextViewConfiguration *_textViewConfig;
    NSAttributedString *_attributedString;
    id <IGAttributedStringTextViewDelegate> _delegate;
}

+ (double)heightWithContainerWidth:(double)arg1 textViewConfig:(id)arg2 attributedString:(id)arg3;
@property(nonatomic) __weak id <IGAttributedStringTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_textViewTapRecognizer:(id)arg1;
- (void)layoutSubviews;
- (id)_initializeTextView;
- (id)initWithAttributedString:(id)arg1 textViewConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

