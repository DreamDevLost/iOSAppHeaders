//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGItemParser.h"

@interface IGFeedItemParser : NSObject <IGItemParser>
{
}

+ (id)parseFollowLocationItem:(id)arg1 feedItemEntryDict:(id)arg2;
+ (id)parseFollowHashtagItem:(id)arg1 feedItemEntryDict:(id)arg2;
+ (id)parseExploreItem:(id)arg1 feedItemEntryDict:(id)arg2;
+ (id)parseItem:(id)arg1;

@end

