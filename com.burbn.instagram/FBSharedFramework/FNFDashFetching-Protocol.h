//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FNFDashQualitySelection, NSArray, NSString;

@protocol FNFDashFetching
- (_Bool)fetchInProgress;
- (void)cancelFetchFrom:(int)arg1 withReason:(NSString *)arg2;
- (void)fetchChunks:(NSArray *)arg1 withQualitySelection:(FNFDashQualitySelection *)arg2;
- (void)setDelegate:(id <FNFDashFetcherDelegate>)arg1;
@end

