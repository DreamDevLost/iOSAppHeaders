//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLocation, IGLocationSuggestionCell;

@protocol IGLocationSuggestionDelegate <NSObject>
- (void)locationSuggestionCell:(IGLocationSuggestionCell *)arg1 stateChanged:(long long)arg2;
- (void)locationSuggestionCelldidClearLocation:(IGLocationSuggestionCell *)arg1;
- (void)locationSuggestionCell:(IGLocationSuggestionCell *)arg1 didSelectTokenWithLocation:(IGLocation *)arg2;
- (void)locationSuggestionCell:(IGLocationSuggestionCell *)arg1 didFinishWithLocation:(IGLocation *)arg2;
@end

