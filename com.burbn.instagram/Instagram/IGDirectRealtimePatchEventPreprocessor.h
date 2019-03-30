//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRealtimePatchEventListener.h"

@class IGDirectRealtimeOperationListenerAnnouncer, IGDirectRealtimeStore, NSString;

@interface IGDirectRealtimePatchEventPreprocessor : NSObject <IGRealtimePatchEventListener>
{
    IGDirectRealtimeOperationListenerAnnouncer *_announcer;
    IGDirectRealtimeStore *_realtimeStore;
    _Bool _shouldIgnoreRealtimeStore;
}

- (void).cxx_destruct;
- (void)handleRealtimePatchEvent:(id)arg1 rawPayload:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithRealtimeStore:(id)arg1 shouldIgnoreRealtimeStore:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

