//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UIScrollViewDelegate.h"

@class IGStoryTextEntryTextView, NSString;

@protocol IGStoryTextEntryTextViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (void)textEntryTextViewDidChangeSelection:(IGStoryTextEntryTextView *)arg1;
- (void)textEntryTextViewDidChange:(IGStoryTextEntryTextView *)arg1;
- (_Bool)textEntryTextView:(IGStoryTextEntryTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)textEntryTextViewDidEndEditing:(IGStoryTextEntryTextView *)arg1;
- (void)textEntryTextViewDidBeginEditing:(IGStoryTextEntryTextView *)arg1;
- (_Bool)textEntryTextViewShouldEndEditing:(IGStoryTextEntryTextView *)arg1;
- (_Bool)textEntryTextViewShouldBeginEditing:(IGStoryTextEntryTextView *)arg1;
@end
