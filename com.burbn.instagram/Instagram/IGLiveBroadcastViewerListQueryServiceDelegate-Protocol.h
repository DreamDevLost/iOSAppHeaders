//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLiveBroadcastViewerListQueryService, NSArray;

@protocol IGLiveBroadcastViewerListQueryServiceDelegate <NSObject>
- (void)viewerListQueryService:(IGLiveBroadcastViewerListQueryService *)arg1 didLoadFinalViewerList:(NSArray *)arg2 withFinalViewerCount:(long long)arg3;
- (void)viewerListQueryService:(IGLiveBroadcastViewerListQueryService *)arg1 didLoadViewerList:(NSArray *)arg2;
@end

