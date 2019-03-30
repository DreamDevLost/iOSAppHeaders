//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFindUsersViewDataSource.h"

@class IGUser, IGUserSession;

@interface IGProfileChainingFindUsersViewDataSource : IGFindUsersViewDataSource
{
    _Bool _shouldRequestMediaInfo;
    IGUserSession *_userSession;
    IGUser *_user;
    long long _similarAccountSource;
}

@property(nonatomic) long long similarAccountSource; // @synthesize similarAccountSource=_similarAccountSource;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)_requestWithMaxId:(id)arg1;
- (void)fetchMore;
- (void)fetchList;
- (id)initWithUserSession:(id)arg1 user:(id)arg2 source:(long long)arg3;

@end
