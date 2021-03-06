//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTimer, IGRequestToken, IGSearchServerResultsStore, IGUserSession, NSString;

@interface IGSearchNetworkDataSource : NSObject
{
    IGUserSession *_userSession;
    IGRequestToken *_currentRequestToken;
    IGSearchServerResultsStore *_serverResultsStore;
    NSString *_currentSearchText;
    CDUnknownBlockType _urlRequestBlock;
    CDUnknownBlockType _parseResultsBlock;
    FBTimer *_timer;
    _Bool _hasMoreResults;
    id <IGSearchNetworkDataSourceDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool hasMoreResults; // @synthesize hasMoreResults=_hasMoreResults;
@property(nonatomic) __weak id <IGSearchNetworkDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidateSearchCache;
- (void)_handleSuccessNetworkResponse:(id)arg1 query:(id)arg2 rankToken:(id)arg3;
- (void)_sendServerRequestForSearchQueryModel:(id)arg1;
- (void)fetchDataForSearchQueryModel:(id)arg1;
- (id)initWithUserSession:(id)arg1 cachingConfiguration:(id)arg2 analyticsModule:(id)arg3 urlRequestBlock:(CDUnknownBlockType)arg4 parseResultsBlock:(CDUnknownBlockType)arg5;

@end

