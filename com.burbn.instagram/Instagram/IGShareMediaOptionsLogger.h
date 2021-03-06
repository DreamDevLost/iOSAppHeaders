//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGShareMediaOptionsLogger : NSObject
{
    long long _mediaType;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSString *_mediaID;
    NSString *_sourceApplication;
    NSString *_shareType;
    long long _storyTapCount;
    long long _feedTapCount;
    _Bool _feedPosted;
    _Bool _storyPosted;
    _Bool _userExited;
    _Bool _mediaDidFailToLoad;
}

- (void).cxx_destruct;
- (void)_logEvent;
- (void)notifyFeedPosted;
- (void)notifyStoryPosted;
- (void)notifyUserExit;
- (void)notifyMediaLoadFailure;
- (void)notifyFeedTapped;
- (void)notifyStoryTapped;
- (id)initWithMediaMetadata:(id)arg1 analyticsLogger:(id)arg2;

@end

