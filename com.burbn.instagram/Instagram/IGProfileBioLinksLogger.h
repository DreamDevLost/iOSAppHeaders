//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGProfileBioLinksLogger : NSObject
{
}

+ (void)logMASUsersForBioSaveWithMASPKs:(id)arg1 module:(id)arg2;
+ (void)logTapRemoveTagFromFromProfileWithUserID:(id)arg1 selfUserID:(id)arg2 module:(id)arg3;
+ (void)logTapViewProfileFromProfileWithUserID:(id)arg1 selfUserID:(id)arg2 module:(id)arg3;
+ (void)logSearchResultsReturnedForSearch:(id)arg1 rankToken:(id)arg2 module:(id)arg3 linkType:(long long)arg4 requestTime:(double)arg5;
+ (void)logSearchResultClickForProfileBioLink:(id)arg1 rankToken:(id)arg2 module:(id)arg3 position:(long long)arg4 isMultiAccountUser:(_Bool)arg5;
+ (void)logNavigationEventForProfileBioLink:(id)arg1 profileUserPK:(id)arg2 module:(id)arg3;

@end

