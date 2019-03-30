//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGFeedItemPageCellState;

@protocol IGFeedItemSectionContext <NSObject>
- (double)containerWidth;
- (IGFeedItemPageCellState *)pageCellState;
- (id <IGFeedItemLoggingProviderDelegate>)loggingProvider;
- (id <IGFeedItemConfigurationType>)itemConfiguration;
- (id <IGFeedConfigurationType>)feedConfiguration;
- (IGFeedItem *)feedItem;
@end
