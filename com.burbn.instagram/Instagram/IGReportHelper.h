//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGReportHelper : NSObject
{
}

+ (void)reportMediaID:(id)arg1 reason:(long long)arg2 sourceName:(id)arg3 networker:(id)arg4 extra:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)reportInappropriateSponsoredMediaID:(id)arg1 sourceName:(id)arg2 currentUser:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 dismissHandler:(CDUnknownBlockType)arg5;
+ (void)reportHackedAccountFromMediaWithID:(id)arg1 sourceName:(id)arg2 hackedUser:(id)arg3 currentUser:(id)arg4 extra:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 dismissHandler:(CDUnknownBlockType)arg7;
+ (void)reportInappropriateMediaID:(id)arg1 sourceName:(id)arg2 currentUser:(id)arg3 photosOfYouAnnouncer:(id)arg4 usertags:(id)arg5 extra:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 dismissHandler:(CDUnknownBlockType)arg8;

@end

