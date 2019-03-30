//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFindUsersViewDataSource.h"

@class IGUserSession, NSString;

@interface IGSuggestedFindUsersViewDataSource : IGFindUsersViewDataSource
{
    _Bool _friendCenterHoldout;
    _Bool _displayStory;
    _Bool _shouldPaginate;
    NSString *_module;
    unsigned long long _requestType;
    IGUserSession *_userSession;
    NSString *_entryFeedItemType;
}

@property(readonly, copy, nonatomic) NSString *entryFeedItemType; // @synthesize entryFeedItemType=_entryFeedItemType;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) _Bool shouldPaginate; // @synthesize shouldPaginate=_shouldPaginate;
@property(readonly, nonatomic) _Bool displayStory; // @synthesize displayStory=_displayStory;
@property(readonly, nonatomic) _Bool friendCenterHoldout; // @synthesize friendCenterHoldout=_friendCenterHoldout;
- (void).cxx_destruct;
- (void)fetchListWithForcedUserIds:(id)arg1;
- (id)_requestWithMaxId:(id)arg1 forcedUserIds:(id)arg2;
- (void)fetchMore;
- (void)fetchList;
- (id)parseListResponse:(id)arg1 withItemKey:(id)arg2;
- (id)initWithDisplayStories:(_Bool)arg1 userSession:(id)arg2 userListCache:(id)arg3 module:(id)arg4 requestType:(unsigned long long)arg5 shouldPaginate:(_Bool)arg6 entryFeedItemType:(id)arg7;

@end

