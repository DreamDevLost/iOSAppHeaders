//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBMediaUploadJobDetail, FBValueObjectEither, NSDictionary, NSString, NSURL;

@protocol FBMediaUploadProtocolProvider
- (FBValueObjectEither *)parseResponse:(NSDictionary *)arg1;
- (NSURL *)getServerUrlForJobDetail:(FBMediaUploadJobDetail *)arg1 jobId:(NSString *)arg2 phase:(NSString *)arg3;
@end

