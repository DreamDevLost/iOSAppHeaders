//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface IGPostLiveCommentFetcher : NSObject
{
    id <IGPostLiveCommentFetcherDelegate> _delegate;
    id <IGAPIClient> _networker;
    NSString *_broadcastId;
    NSString *_encodingTag;
    NSMutableSet *_hasInFlightFetchForOffset;
}

@property(readonly, copy, nonatomic) NSMutableSet *hasInFlightFetchForOffset; // @synthesize hasInFlightFetchForOffset=_hasInFlightFetchForOffset;
@property(readonly, copy, nonatomic) NSString *encodingTag; // @synthesize encodingTag=_encodingTag;
@property(readonly, copy, nonatomic) NSString *broadcastId; // @synthesize broadcastId=_broadcastId;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(nonatomic) __weak id <IGPostLiveCommentFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchCommentsForSecondsIntoVideo:(long long)arg1;
- (id)initWithBroadcastId:(id)arg1 encodingTag:(id)arg2 networker:(id)arg3;

@end
