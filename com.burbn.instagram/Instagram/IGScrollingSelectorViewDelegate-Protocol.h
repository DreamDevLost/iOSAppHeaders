//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGScrollingSelectorView, IGScrollingSelectorViewCell, NSIndexPath;

@protocol IGScrollingSelectorViewDelegate
- (void)scrollingSelectorView:(IGScrollingSelectorView *)arg1 willDisplayCell:(IGScrollingSelectorViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)scrollingSelectorView:(IGScrollingSelectorView *)arg1 didEndScrollingAtIndexPath:(NSIndexPath *)arg2;
- (void)scrollingSelectorView:(IGScrollingSelectorView *)arg1 didChangeSelectedIndexPath:(NSIndexPath *)arg2;
@end
