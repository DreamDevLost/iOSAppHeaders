//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGReel, NSError;

@protocol IGStoryTrayDataSourceListener <NSObject>
- (void)storyTrayDataSource:(id <IGStoryTrayDataSource>)arg1 updateFailedWithRefreshType:(long long)arg2 error:(NSError *)arg3;
- (void)storyTrayDataSource:(id <IGStoryTrayDataSource>)arg1 didUpdateReel:(IGReel *)arg2 positionChanged:(_Bool)arg3;
- (void)storyTrayDataSource:(id <IGStoryTrayDataSource>)arg1 didUpdateWithRefreshType:(long long)arg2;
@end

