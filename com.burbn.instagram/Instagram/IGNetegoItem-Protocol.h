//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAsyncAdItemIDProviding.h"
#import "IGMainFeedItemIdProviding.h"

@class NSString;

@protocol IGNetegoItem <IGMainFeedItemIdProviding, IGAsyncAdItemIDProviding>
- (NSString *)trackingToken;
- (unsigned long long)type;
- (NSString *)pk;
@end
