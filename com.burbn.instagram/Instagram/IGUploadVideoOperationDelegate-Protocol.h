//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSOperation, NSURL;

@protocol IGUploadVideoOperationDelegate <NSObject>
- (void)uploadVideoOperation:(NSOperation *)arg1 didUpdateWithSampleImageData:(NSData *)arg2;
- (void)uploadVideoOperation:(NSOperation *)arg1 didUpdateWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)uploadVideoOperation:(NSOperation *)arg1 didUpdateWithRenderedVideoUrl:(NSURL *)arg2;
- (void)uploadVideoOperation:(NSOperation *)arg1 didUpdateProgress:(double)arg2;
- (void)uploadVideoOperation:(NSOperation *)arg1 didCompleteWithError:(NSError *)arg2 response:(struct NSDictionary *)arg3;
@end

