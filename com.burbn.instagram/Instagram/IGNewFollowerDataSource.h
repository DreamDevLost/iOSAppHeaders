//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedStatusViewDataSource.h"

@class IGUser, NSArray, NSString;

@interface IGNewFollowerDataSource : NSObject <IGFeedStatusViewDataSource>
{
    IGUser *_user;
    id <IGAPIClient> _networker;
    NSArray *_featuredUserInfoList;
    long long _authorizationError;
    NSString *_errorMessage;
    long long _status;
    id <IGNewFollowerDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <IGNewFollowerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)status;
- (_Bool)moreAvailable;
- (id)authorizationErrorMessageDetail;
- (id)authorizationErrorMessage;
- (id)errorMessage;
- (id)emptyFeedModel;
- (long long)authorizationError;
- (unsigned long long)itemCount;
- (_Bool)loadedOnce;
- (void)fetchFeaturedUserInfo;
- (id)initWithNetowrker:(id)arg1 user:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

