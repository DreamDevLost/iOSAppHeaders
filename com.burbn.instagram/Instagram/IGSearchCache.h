//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IGSearchCache : NSObject
{
    NSMutableDictionary *_store;
}

@property(retain) NSMutableDictionary *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)findOrCreateCacheEntryWithKey:(id)arg1 queryString:(id)arg2 additionalParameters:(id)arg3;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)init;

@end

