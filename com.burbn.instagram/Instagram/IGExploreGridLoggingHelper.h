//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGExploreGridLoggingHelper : NSObject
{
}

+ (void)_logEventForShoppingItem:(id)arg1 eventName:(id)arg2 position:(CDStruct_1d3354f4)arg3 sessionId:(id)arg4 module:(id)arg5 topic:(id)arg6 customSuffix:(id)arg7;
+ (void)_logEventForPostLiveItem:(id)arg1 eventName:(id)arg2 position:(CDStruct_1d3354f4)arg3 sessionId:(id)arg4 module:(id)arg5 topic:(id)arg6 customSuffix:(id)arg7;
+ (void)_logEventForOneByTwoViewModel:(id)arg1 eventName:(id)arg2 position:(CDStruct_1d3354f4)arg3 sessionId:(id)arg4 module:(id)arg5 topic:(id)arg6 customSuffix:(id)arg7;
+ (void)_logEventForSuggestedTopicPivot:(id)arg1 eventName:(id)arg2 position:(CDStruct_1d3354f4)arg3 sessionId:(id)arg4 module:(id)arg5 topic:(id)arg6 customSuffix:(id)arg7;
+ (void)_logEventForSuggestedHashtagPivot:(id)arg1 eventName:(id)arg2 position:(CDStruct_1d3354f4)arg3 sessionId:(id)arg4 module:(id)arg5 topic:(id)arg6 customSuffix:(id)arg7;
+ (void)_logEventForMedia:(id)arg1 eventName:(id)arg2 position:(CDStruct_1d3354f4)arg3 sessionId:(id)arg4 module:(id)arg5 topic:(id)arg6 customSuffix:(id)arg7;
+ (void)_logEventForChannel:(id)arg1 eventName:(id)arg2 position:(CDStruct_1d3354f4)arg3 sessionId:(id)arg4 module:(id)arg5 topic:(id)arg6 customSuffix:(id)arg7;
+ (void)logPullToRefreshWithSessionId:(id)arg1 module:(id)arg2 previousFullFetchTime:(id)arg3 topic:(id)arg4;
+ (void)logClickForItem:(id)arg1 position:(CDStruct_1d3354f4)arg2 sessionId:(id)arg3 module:(id)arg4 topic:(id)arg5 customSuffix:(id)arg6;
+ (void)logImpressionForItem:(id)arg1 position:(CDStruct_1d3354f4)arg2 sessionId:(id)arg3 module:(id)arg4 topic:(id)arg5 customSuffix:(id)arg6;

@end

