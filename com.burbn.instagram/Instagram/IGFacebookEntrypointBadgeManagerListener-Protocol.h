//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFacebookEntrypointBadgeManager, NSString;

@protocol IGFacebookEntrypointBadgeManagerListener <NSObject>
- (void)facebookBadgeManager:(IGFacebookEntrypointBadgeManager *)arg1 didFetchFBUserId:(NSString *)arg2;
- (void)facebookBadgeManager:(IGFacebookEntrypointBadgeManager *)arg1 didUpdateBadgeCount:(long long)arg2;
@end

