//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGTextViewSectionController, NSString, NSURL;

@protocol IGTextViewSectionControllerDelegate <NSObject>
- (void)textViewSectionController:(IGTextViewSectionController *)arg1 didLongTapOnString:(NSString *)arg2 URL:(NSURL *)arg3;
- (void)textViewSectionController:(IGTextViewSectionController *)arg1 didTapOnString:(NSString *)arg2 URL:(NSURL *)arg3;
- (void)didSelectTextViewSectionController:(IGTextViewSectionController *)arg1;
@end

