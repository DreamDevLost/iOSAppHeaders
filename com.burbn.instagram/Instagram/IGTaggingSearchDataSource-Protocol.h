//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol IGTaggingSearchDataSource <NSObject>
- (_Bool)isLoading;
- (NSArray *)filteredResults;
- (void)tryLoadingMoreResults;
- (void)filterWithQuery:(NSString *)arg1;
@end

