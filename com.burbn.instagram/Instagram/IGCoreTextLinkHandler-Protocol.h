//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCoreTextView, NSString, NSURL;

@protocol IGCoreTextLinkHandler <NSObject>
- (void)coreTextView:(IGCoreTextView *)arg1 didLongTapOnString:(NSString *)arg2 URL:(NSURL *)arg3;
- (void)coreTextView:(IGCoreTextView *)arg1 didTapOnString:(NSString *)arg2 URL:(NSURL *)arg3;
@end

