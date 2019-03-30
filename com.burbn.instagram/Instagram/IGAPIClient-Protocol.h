//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGNetworking.h"

@class IGRequestPolicy, IGRequestToken, IGURLRequest, NSObject<OS_dispatch_queue>;

@protocol IGAPIClient <IGNetworking>
- (IGRequestToken *)startAPIRequest:(IGURLRequest *)arg1 parsingHandler:(id (^)(NSDictionary *))arg2 successHandler:(void (^)(IGHTTPResponse *, id))arg3 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg4;
- (IGRequestToken *)startAPIRequest:(IGURLRequest *)arg1 successHandler:(void (^)(IGHTTPResponse *, id))arg2 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg3;
- (IGRequestToken *)startAPIRequest:(IGURLRequest *)arg1 policy:(IGRequestPolicy *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 cacheHandler:(void (^)(NSDate *, NSDate *, NSDate *, id))arg4 parsingHandler:(id (^)(NSDictionary *))arg5 successHandler:(void (^)(IGHTTPResponse *, id))arg6 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg7;
- (IGRequestToken *)startAPIRequest:(IGURLRequest *)arg1 policy:(IGRequestPolicy *)arg2 cacheHandler:(void (^)(NSDate *, NSDate *, NSDate *, id))arg3 parsingHandler:(id (^)(NSDictionary *))arg4 successHandler:(void (^)(IGHTTPResponse *, id))arg5 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg6;
- (IGRequestToken *)startAPIRequest:(IGURLRequest *)arg1 policy:(IGRequestPolicy *)arg2 parsingHandler:(id (^)(NSDictionary *))arg3 successHandler:(void (^)(IGHTTPResponse *, id))arg4 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg5;
- (IGRequestToken *)startAPIRequest:(IGURLRequest *)arg1 policy:(IGRequestPolicy *)arg2 successHandler:(void (^)(IGHTTPResponse *, id))arg3 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg4;
@end

