//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FNFDashManifestFetching
- (void)fetchPlaylistImmediately;
- (void)stopPeriodicFetching;
- (void)startPeriodicFetching;
- (void)fetchFirstManifest;
- (void)setDelegate:(id <FNFDashManifestFetcherDelegate>)arg1;
@end

