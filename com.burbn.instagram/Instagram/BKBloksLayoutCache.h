//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BKBloksLayoutCache : NSObject
{
    struct unordered_map<BKBloksLayoutCacheKey, BKBloksLayout, std::__1::hash<BKBloksLayoutCacheKey>, std::__1::equal_to<BKBloksLayoutCacheKey>, std::__1::allocator<std::__1::pair<const BKBloksLayoutCacheKey, BKBloksLayout>>> _layoutCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setLayout:(const struct BKBloksLayout *)arg1 forModel:(id)arg2 constrainingSize:(struct BKBloksLayoutConstrainingSize)arg3;
- (struct BKBloksLayoutCacheItem)layoutForModel:(id)arg1 constrainingSize:(struct BKBloksLayoutConstrainingSize)arg2;

@end

