//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSavedMediaCollectionsDataSourceConfigurationType.h"

@class IGUser, NSString;

@interface IGSavedMediaCollectionsPublicDataSourceConfiguration : NSObject <IGSavedMediaCollectionsDataSourceConfigurationType>
{
    IGUser *_user;
}

- (void).cxx_destruct;
- (id)requestWithMaxID:(id)arg1;
- (id)initWithUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

