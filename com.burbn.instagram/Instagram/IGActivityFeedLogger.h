//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSMutableSet, NSString;

@interface IGActivityFeedLogger : NSObject
{
    NSString *_module;
    id <IGAPIClient> _networker;
    NSMutableSet *_impressionPKSet;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)logInlineSUPosition:(unsigned long long)arg1;
- (void)logHideWithStoryPK:(id)arg1 position:(unsigned long long)arg2 storyType:(unsigned long long)arg3 section:(id)arg4 tuuid:(id)arg5 timeBucket:(id)arg6;
- (void)logClickWithStoryPK:(id)arg1 position:(unsigned long long)arg2 storyType:(unsigned long long)arg3 additionalInfo:(id)arg4 section:(id)arg5 tuuid:(id)arg6 timeBucket:(id)arg7 tapTarget:(id)arg8;
- (void)logImpressionWithStoryPK:(id)arg1 position:(unsigned long long)arg2 storyType:(unsigned long long)arg3 section:(id)arg4 tuuid:(id)arg5 timeBucket:(id)arg6 tagID:(id)arg7;
- (void)_logEventWithAction:(id)arg1 storyPK:(id)arg2 storyTuuid:(id)arg3;
- (id)initWithModule:(id)arg1 networker:(id)arg2 userSession:(id)arg3;

@end

