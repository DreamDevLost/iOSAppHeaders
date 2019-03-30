//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGOverlayTransformViewType.h"
#import "UITextViewDelegate.h"

@class CALayer, IGGradientTextView, NSString;

@interface IGPollStickerEditableVoteView : UIView <UITextViewDelegate, IGOverlayTransformViewType>
{
    _Bool _showPlaceholder;
    IGGradientTextView *_leftGradientTextView;
    IGGradientTextView *_rightGradientTextView;
    id <IGPollStickerVoteViewDelegate> _delegate;
    CALayer *_lineLayer;
}

@property(readonly, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(nonatomic) __weak id <IGPollStickerVoteViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showPlaceholder; // @synthesize showPlaceholder=_showPlaceholder;
@property(readonly, nonatomic) IGGradientTextView *rightGradientTextView; // @synthesize rightGradientTextView=_rightGradientTextView;
@property(readonly, nonatomic) IGGradientTextView *leftGradientTextView; // @synthesize leftGradientTextView=_leftGradientTextView;
- (void).cxx_destruct;
- (id)outlinePath;
- (void)_adjustPlaceholderFontSizeForGradientTextView:(id)arg1;
- (void)_centerContentForTextView:(id)arg1;
- (id)_gradientTextViewForTextView:(id)arg1;
- (id)transformTargetView;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
