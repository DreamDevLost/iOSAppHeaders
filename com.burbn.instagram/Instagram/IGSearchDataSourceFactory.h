//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGSearchDataSourceFactory : NSObject
{
}

+ (id)placeDataSourceForUserSession:(id)arg1 withMaxLocalResultCount:(long long)arg2;
+ (id)placeDataSourceForUserSession:(id)arg1;
+ (id)userDataSourceFromBootstrapForUserSession:(id)arg1;
+ (id)userMentionDataSourceForUserSession:(id)arg1;
+ (id)userDataSourceForUserSession:(id)arg1;
+ (id)hashtagDataSourceForUserSession:(id)arg1;

@end
