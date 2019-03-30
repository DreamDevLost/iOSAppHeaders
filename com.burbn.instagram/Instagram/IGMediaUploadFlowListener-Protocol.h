//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaUploadFlowSnapshot, NSDictionary, NSString, NSURL;

@protocol IGMediaUploadFlowListener <NSObject>
- (void)uploadFlowDidCancelForUploadId:(NSString *)arg1;
- (void)uploadFlowID:(NSString *)arg1 transcodedVideoURL:(NSURL *)arg2;
- (void)uploadFlowID:(NSString *)arg1 didUpdateSnapshot:(IGMediaUploadFlowSnapshot *)arg2;
- (void)uploadFlowID:(NSString *)arg1 step:(long long)arg2 progress:(double)arg3;
- (void)uploadFlowID:(NSString *)arg1 step:(long long)arg2 state:(long long)arg3 extra:(NSDictionary *)arg4 metrics:(NSDictionary *)arg5;
@end

