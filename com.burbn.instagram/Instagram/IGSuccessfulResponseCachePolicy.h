//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCachePolicy.h"

@class IGCacheMetadata, NSString;

@interface IGSuccessfulResponseCachePolicy : NSObject <IGCachePolicy>
{
    IGCacheMetadata *_metadata;
}

@property(readonly, nonatomic) IGCacheMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (_Bool)shouldCacheDataFromResponse:(id)arg1;
- (void)requestFinishedWithError:(id)arg1;
- (void)requestCompletedSuccessfullyWithResponse:(id)arg1;
- (unsigned long long)requestStartedWithCacheUnlockHandler:(CDUnknownBlockType)arg1;
- (id)initWithMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

