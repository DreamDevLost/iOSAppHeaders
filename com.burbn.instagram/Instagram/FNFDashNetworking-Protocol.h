//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FNFDashFetchRange, FNFDashSelectionMetadata, NSString;

@protocol FNFDashNetworking
- (_Bool)fetchInProgress;
- (void)cancelFetchFrom:(int)arg1 withReason:(NSString *)arg2;
- (void)fetchWithRange:(FNFDashFetchRange *)arg1 track:(long long)arg2 selectionMetadata:(FNFDashSelectionMetadata *)arg3;
- (void)setDelegate:(id <FNFDashNetworkerDelegate>)arg1;
@end

