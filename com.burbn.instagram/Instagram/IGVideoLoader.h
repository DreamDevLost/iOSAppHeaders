//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IGVideoLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_videoIdToSessions;
    NSMapTable *_videoIdToCancellationObservers;
}

- (void).cxx_destruct;
- (void)_queuedCancelLoadingVideo:(id)arg1;
- (void)_queuedLoadVideo:(id)arg1 config:(id)arg2 userSession:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)cancelLoadingVideo:(id)arg1;
- (void)registerObserver:(id)arg1 forVideo:(id)arg2;
- (void)loadVideo:(id)arg1 config:(id)arg2 userSession:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end
