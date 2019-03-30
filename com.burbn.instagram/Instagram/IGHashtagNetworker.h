//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRequestToken, IGSessionTracker, IGUserSession;

@interface IGHashtagNetworker : NSObject
{
    IGUserSession *_userSession;
    IGSessionTracker *_sessionTracker;
    IGRequestToken *_requestTokenInfo;
    IGRequestToken *_requestTokenStory;
    IGRequestToken *_requestTokenMedia;
    IGRequestToken *_requestTokenHeaderDropdownMenu;
    long long _infoFetchState;
    long long _mediaFetchState;
    long long _storyFetchState;
    long long _headerDropdownMenuFetchState;
    _Bool _shouldUseNewAPI;
    id <IGHashtagNetworkerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGHashtagNetworkerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleFailureWithNetworkRequestType:(long long)arg1 config:(id)arg2 error:(id)arg3;
- (id)_buildMediaRequestWithConfig:(id)arg1 parameters:(id)arg2;
- (_Bool)_requestContentWithConfig:(id)arg1;
- (_Bool)_requestStoryWithConfig:(id)arg1;
- (_Bool)_requestInfoWithConfig:(id)arg1;
- (long long)fetchStateForRequestType:(long long)arg1;
- (void)cancelRequest;
- (void)requestHeaderEYMFModelForHashtagModel:(id)arg1;
- (_Bool)requestDataWithConfig:(id)arg1;
- (id)initWithUserSession:(id)arg1 sessionTracker:(id)arg2;

@end

