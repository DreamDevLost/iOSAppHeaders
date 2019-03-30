//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUploadSession, IGUploadSessionContext, NSData, NSDictionary, NSError, NSString, NSURL;

@protocol IGUploadSessionDelegate <NSObject>
- (void)uploadSession:(IGUploadSession *)arg1 didRenderVideoUrl:(NSURL *)arg2 forMediaId:(NSString *)arg3;
- (void)uploadSession:(IGUploadSession *)arg1 didRenderImageData:(NSData *)arg2 forMediaId:(NSString *)arg3;
- (void)uploadSession:(IGUploadSession *)arg1 didUpdateWithContext:(IGUploadSessionContext *)arg2;
- (void)uploadSession:(IGUploadSession *)arg1 didChangeStatus:(long long)arg2 serverResponse:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)uploadSession:(IGUploadSession *)arg1 didUpdateTotalProgress:(double)arg2;
@end
