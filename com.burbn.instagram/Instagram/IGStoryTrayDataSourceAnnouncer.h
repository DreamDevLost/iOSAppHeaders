//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAnnouncer;

@interface IGStoryTrayDataSourceAnnouncer : NSObject
{
    IGAnnouncer *_announcer;
}

@property(readonly, nonatomic) IGAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void).cxx_destruct;
- (void)announceStoryTrayDataSource:(id)arg1 updateFailedWithRefreshType:(long long)arg2 error:(id)arg3;
- (void)announceStoryTrayDataSource:(id)arg1 didUpdateReel:(id)arg2 positionChanged:(_Bool)arg3;
- (void)announceStoryTrayDataSource:(id)arg1 didUpdateWithRefreshType:(long long)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

@end

