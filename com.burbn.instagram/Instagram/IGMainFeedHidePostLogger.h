//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGMainFeedHidePostLogger : NSObject
{
}

+ (void)reportDismissExploreItemsOnMainFeed:(id)arg1 userSession:(id)arg2;
+ (void)_reportUserDismissItem:(id)arg1 withEventType:(long long)arg2 userSession:(id)arg3;
+ (void)_logHidingForItem:(id)arg1 withEventType:(long long)arg2 withSourceModule:(id)arg3 extraInfo:(id)arg4 userSession:(id)arg5 supportSponsoredTracking:(_Bool)arg6;
+ (void)reportAndLogHidingForItem:(id)arg1 withEventType:(long long)arg2 withSourceModule:(id)arg3 extraInfo:(id)arg4 userSession:(id)arg5 supportSponsoredTracking:(_Bool)arg6;

@end
