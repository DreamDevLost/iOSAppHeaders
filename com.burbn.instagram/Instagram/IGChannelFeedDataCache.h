//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGChannelFeedData, NSMutableArray;

@interface IGChannelFeedDataCache : NSObject
{
    NSMutableArray *_pages;
    IGChannelFeedData *_lastSeenPage;
}

@property(readonly, nonatomic) IGChannelFeedData *lastSeenPage; // @synthesize lastSeenPage=_lastSeenPage;
- (void).cxx_destruct;
- (id)_pageThatContainsPost:(id)arg1;
- (id)_trimmedPageWithStartIndex:(unsigned long long)arg1 originalPage:(id)arg2;
- (void)_resetCacheWithPost:(id)arg1;
- (void)_updateCacheWithPage:(id)arg1;
- (void)removeDuplicatePostsFromPage:(id)arg1;
- (void)removePost:(id)arg1;
- (void)updateWithLastSeenPost:(id)arg1;
- (void)addPage:(id)arg1;
- (id)allPages;
- (id)initWithPage:(id)arg1;
- (id)init;

@end
