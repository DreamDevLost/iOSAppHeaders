//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IGMemoizer : NSObject
{
    NSMutableDictionary *_cache;
    CDUnknownBlockType _performBlock;
}

- (void).cxx_destruct;
- (void)clear;
- (id)performWithInput:(id)arg1;
- (id)initWithPerformBlock:(CDUnknownBlockType)arg1;

@end

