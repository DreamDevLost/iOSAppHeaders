//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@interface IGDirectKeyboardTextView : UITextView
{
    _Bool _canPerformActionsForMenu;
    id <IGDirectKeyboardTextViewMediaPasteDelegate> _mediaPasteDelegate;
}

@property(nonatomic) __weak id <IGDirectKeyboardTextViewMediaPasteDelegate> mediaPasteDelegate; // @synthesize mediaPasteDelegate=_mediaPasteDelegate;
- (void).cxx_destruct;
- (void)_menuWillHide;
- (void)_threadCellMenuWillShow;
- (void)paste:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)didMoveToSuperview;

@end

