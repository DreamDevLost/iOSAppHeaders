//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGHashtagMainFeedDataStore, IGHashtagNetworker;

@interface IGHashtagMainFeedSingleDataController : NSObject
{
    IGHashtagMainFeedDataStore *_dataStore;
    IGHashtagNetworker *_networker;
}

@property(readonly, nonatomic) IGHashtagNetworker *networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) IGHashtagMainFeedDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)arg1 networker:(id)arg2;

@end
