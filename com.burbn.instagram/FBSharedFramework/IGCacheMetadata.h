//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface IGCacheMetadata : NSObject
{
    NSString *_key;
    NSDate *_invalidationDate;
}

@property(readonly, nonatomic) NSDate *invalidationDate; // @synthesize invalidationDate=_invalidationDate;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithUserPk:(id)arg1 cacheKey:(id)arg2 invalidationDate:(id)arg3;
- (id)initWithUserPK:(id)arg1 cacheKey:(id)arg2;

@end

