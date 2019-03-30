//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAutocompleteAlmostAbstractDataSource.h"

@class IGAutocompleteBrandedContentStore, IGUserSession, NSArray, NSString;

@interface IGBrandedContentLocalDataSource : NSObject <IGAutocompleteAlmostAbstractDataSource>
{
    IGUserSession *_userSession;
    IGAutocompleteBrandedContentStore *_brandedContentStore;
    NSArray *_filteredUsers;
    NSString *_query;
}

@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)resultForRow:(long long)arg1;
- (id)allResults;
- (unsigned long long)numberOfResults;
- (void)clearLocalData;
- (void)clearLocalDataExceptSelectedSponsors:(id)arg1;
- (id)filteredUsers;
- (id)_defaultSet;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
