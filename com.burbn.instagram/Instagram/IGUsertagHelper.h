//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGUsertagHelper : NSObject
{
}

+ (id)usertagActionAlertControllerForFeedItem:(id)arg1 userSession:(id)arg2 viewController:(id)arg3;
+ (void)_untagCurrentUserForItem:(id)arg1 networker:(id)arg2 photosOfYouAnnouncer:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
+ (void)setUsertagVisible:(_Bool)arg1 forItems:(id)arg2 networker:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
+ (id)_mediaIdListForItems:(id)arg1;

@end
