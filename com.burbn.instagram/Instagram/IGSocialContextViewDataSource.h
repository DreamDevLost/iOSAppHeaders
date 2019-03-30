//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedStatusViewDataSource.h"

@class IGUserSession, NSDictionary, NSString;

@interface IGSocialContextViewDataSource : NSObject <IGFeedStatusViewDataSource>
{
    _Bool _loading;
    _Bool _moreAvailable;
    id <IGSocialContextViewDataSourceDelegate> _delegate;
    long long _authorizationError;
    NSDictionary *_dataDict;
    NSString *_errorMessage;
    id <IGAPIClient> _networker;
    long long _status;
    IGUserSession *_userSession;
}

@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(nonatomic) long long authorizationError; // @synthesize authorizationError=_authorizationError;
@property(nonatomic) __weak id <IGSocialContextViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)authorizationErrorMessageDetail;
- (id)authorizationErrorMessage;
- (id)emptyFeedModel;
- (unsigned long long)itemCount;
- (_Bool)loadedOnce;
- (void)fetchListWithTargetId:(id)arg1;
- (id)_requestWithTargetId:(id)arg1;
- (id)_parseListResponse:(id)arg1;
- (void)_fetchListWithRequest:(id)arg1 status:(long long)arg2 successCallback:(CDUnknownBlockType)arg3 failureCallback:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

