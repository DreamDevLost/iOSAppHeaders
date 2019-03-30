//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRequestToken, IGUserSession, NSArray;

@interface IGRecentSearchDataSource : NSObject
{
    _Bool _loading;
    id <IGRecentSearchDataSourceDelegate> _delegate;
    NSArray *_recentItems;
    IGRequestToken *_currentRequestToken;
    IGUserSession *_userSession;
}

+ (id)_orderedRecentSearchesFromResponse:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGRequestToken *currentRequestToken; // @synthesize currentRequestToken=_currentRequestToken;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) NSArray *recentItems; // @synthesize recentItems=_recentItems;
@property(readonly, nonatomic) __weak id <IGRecentSearchDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_requestForRecentSearches;
- (void)_didFinishRequestWithRecentItems:(id)arg1;
- (void)_willStartRequest;
- (void)fetchRecentSearches;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2;

@end
