//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGUserSession, NSString;

@interface IGPageMediaVideoViewLoggerProvider : NSObject
{
    NSString *_module;
    IGFeedItem *_post;
    IGUserSession *_userSession;
    NSString *_sessionId;
    id <IGFeedItemVideoLoggingProviderDelegate> _loggingProvider;
}

- (void).cxx_destruct;
- (id)loggingConfigForCarouselIndex:(long long)arg1 pk:(id)arg2;
- (id)loggerForCarouselIndex:(long long)arg1 pk:(id)arg2;
- (id)_extrasForCarouselIndex:(long long)arg1 pk:(id)arg2;
- (id)initWithPost:(id)arg1 module:(id)arg2 loggingProvider:(id)arg3 userSession:(id)arg4;

@end

