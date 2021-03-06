//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGUserSession, NSArray, NSString;

@interface IGSharedStoriesService : NSObject <IGUserSessionObject>
{
    IGUserSession *_userSession;
    _Bool _isRequesting;
    _Bool _allowContributeToSharedStories;
    NSArray *_availableSharedStories;
}

@property(readonly, nonatomic) NSArray *availableSharedStories; // @synthesize availableSharedStories=_availableSharedStories;
- (void).cxx_destruct;
- (void)fetchAvailableSharedStoriesList;
- (void)addNewlyCreatedSharedStories:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

