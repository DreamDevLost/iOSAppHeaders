//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryAPIBackgroundFetchTaskDelegate.h"

@class IGMediaBackgroundFetchTask, IGStoryAPIBackgroundFetchTask, IGUserSession;

@interface IGStoryBackgroundFetchManager : NSObject <IGStoryAPIBackgroundFetchTaskDelegate>
{
    IGUserSession *_userSession;
    CDUnknownBlockType _completionHandler;
    _Bool _cacheAPIResponse;
    unsigned long long _result;
    IGStoryAPIBackgroundFetchTask *_apiTask;
    IGMediaBackgroundFetchTask *_mediaTask;
}

- (void).cxx_destruct;
- (void)storyAPIBackgroundFetchTask:(id)arg1 didFetchTrayItems:(id)arg2;
- (void)cancelFetch;
- (void)performFetch;
- (id)initWithUserSession:(id)arg1 cacheAPIResponse:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
