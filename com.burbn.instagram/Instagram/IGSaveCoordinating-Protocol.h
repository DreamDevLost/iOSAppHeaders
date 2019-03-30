//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGProductItem, IGProductSaveStatusStore, NSArray, NSDictionary, NSString;

@protocol IGSaveCoordinating <NSObject>
- (void)saveFeedItem:(IGFeedItem *)arg1 saveStatus:(_Bool)arg2 addCollectionIds:(NSArray *)arg3 removeCollectionIds:(NSArray *)arg4 successHandler:(void (^)(IGHTTPResponse *, id))arg5 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg6 analyticsModule:(NSString *)arg7;
- (void)saveProductItem:(IGProductItem *)arg1 saveStatus:(_Bool)arg2 productSaveStatusStore:(IGProductSaveStatusStore *)arg3 merchantId:(NSString *)arg4 mediaId:(NSString *)arg5 logger:(id <IGSaveLogger>)arg6 extras:(NSDictionary *)arg7 successHandler:(void (^)(IGHTTPResponse *, id, _Bool))arg8 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg9 analyticsModule:(NSString *)arg10;
@end
