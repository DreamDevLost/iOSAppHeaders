//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FNFDashPlaylistManaging
- (void)fetchPlaylistImmediately;
- (_Bool)isStreamDry;
- (void)playbackTimeChanged:(CDStruct_1b6d18a9)arg1;
- (void)stopPeriodicPlaylistUpdate;
- (void)startPeriodicPlaylistUpdate;
- (void)loadFirstPlaylist;
- (void)setDelegate:(id <FNFDashPlaylistManagerDelegate>)arg1;
@end
