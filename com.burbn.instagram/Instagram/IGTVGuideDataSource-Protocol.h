//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGTVBadgingResponse, NSArray;

@protocol IGTVGuideDataSource <NSObject>
@property(readonly, nonatomic) long long fetchStatus;
@property(readonly, nonatomic) IGTVBadgingResponse *badgingResponse;
@property(readonly, nonatomic) id <IGTVChannelDataSourceType> myChannelDataSource;
@property(readonly, nonatomic) NSArray *channelDataSources;
- (void)notifyViewerExit;
- (void)fetch;
- (void)addListener:(id <IGTVGuideDataSourceListener>)arg1;
@end

