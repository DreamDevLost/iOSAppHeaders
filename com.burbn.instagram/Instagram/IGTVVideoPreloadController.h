//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaPreloader, IGUserSession;

@interface IGTVVideoPreloadController : NSObject
{
    IGMediaPreloader *_preloader;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)preloadFeedItems:(id)arg1 focusedIndex:(long long)arg2 module:(id)arg3;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

@end
