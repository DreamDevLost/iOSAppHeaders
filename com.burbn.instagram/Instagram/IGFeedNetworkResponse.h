//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface IGFeedNetworkResponse : FBValueObject <NSCopying, NSCoding>
{
    _Bool _error;
    NSArray *_downloadedItems;
    NSString *_nextMaxID;
    NSDictionary *_response;
}

@property(readonly, nonatomic) _Bool error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *nextMaxID; // @synthesize nextMaxID=_nextMaxID;
@property(readonly, copy, nonatomic) NSArray *downloadedItems; // @synthesize downloadedItems=_downloadedItems;
- (void).cxx_destruct;
- (id)initWithDownloadedItems:(id)arg1 nextMaxID:(id)arg2 response:(id)arg3 error:(_Bool)arg4;

@end

