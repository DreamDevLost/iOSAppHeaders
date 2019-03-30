//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAutoupdaterDriver, FBAutoupdaterUpdate, NSError, NSProgress, NSString;

@protocol FBAutoupdaterDriverDelegate <NSObject>

@optional
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didFinishEventsForIdentifier:(NSString *)arg2;
- (void)autoupdaterDriverDidRemoveAllInactiveUpdatesAndResetActiveUpdate:(FBAutoupdaterDriver *)arg1;
- (_Bool)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 shouldOptimizeUnarchiverForUpdate:(FBAutoupdaterUpdate *)arg2;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didFinishProcessingUpdate:(FBAutoupdaterUpdate *)arg2;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didFinishVerifyingUpdate:(FBAutoupdaterUpdate *)arg2;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didFinishDeltaPatchingUpdate:(FBAutoupdaterUpdate *)arg2;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didStartProcessingUpdate:(FBAutoupdaterUpdate *)arg2;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didFinishUnarchivingUpdate:(FBAutoupdaterUpdate *)arg2;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didFinishDownloadingUpdate:(FBAutoupdaterUpdate *)arg2;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 update:(FBAutoupdaterUpdate *)arg2 didMakeProgress:(NSProgress *)arg3;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didStartDownloadingUpdate:(FBAutoupdaterUpdate *)arg2 expectedLength:(long long)arg3;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didHitNonCriticalError:(NSError *)arg2 update:(FBAutoupdaterUpdate *)arg3;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didCancel:(FBAutoupdaterUpdate *)arg2;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didFailUpdate:(FBAutoupdaterUpdate *)arg2 error:(NSError *)arg3;
- (void)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 didProcessUpdate:(FBAutoupdaterUpdate *)arg2;
- (_Bool)autoupdaterDriver:(FBAutoupdaterDriver *)arg1 shouldProcessUpdate:(FBAutoupdaterUpdate *)arg2;
@end
