//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGLRUCache, NSString;

@interface IGGraphQLCache : NSObject <IGUserSessionObject>
{
    IGLRUCache *_cache;
}

@property(readonly, nonatomic) IGLRUCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)getCachedResponseForRequest:(id)arg1 hitCompletionHandler:(CDUnknownBlockType)arg2 missCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setCachedResponseForRequest:(id)arg1 response:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
