//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPostUpload, NSError, NSURL;

@protocol IGPostUploadListener <NSObject>
- (void)postUpload:(IGPostUpload *)arg1 didRenderVideoAtUrl:(NSURL *)arg2;
- (void)postUpload:(IGPostUpload *)arg1 didUpdateStatus:(long long)arg2 error:(NSError *)arg3;
@end

