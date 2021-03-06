//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTabControlSegment.h"
#import "NSObject.h"

@class IGUserSession, NSString;

@protocol IGSearchChildViewControllerType <NSObject, IGTabControlSegment>
+ (void)prefetchSuggestedResultsIfNeeded:(IGUserSession *)arg1;
- (void)logSearchTypingEvent;
- (void)logSearchCancelEvent;
- (void)logSearchSessionRenewEvent;
- (void)searchDidEnd;
- (void)searchDidStart;
- (void)onSearchTextDidChange:(NSString *)arg1;
- (NSString *)searchBarPlaceholder;
@end

