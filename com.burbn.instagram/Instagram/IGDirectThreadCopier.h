//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectPublishedThread;

@interface IGDirectThreadCopier : NSObject
{
    IGDirectPublishedThread *_thread;
}

+ (id)withThread:(id)arg1;
@property(readonly, nonatomic) IGDirectPublishedThread *thread; // @synthesize thread=_thread;
- (void).cxx_destruct;
- (id)byReplacingMessages:(id)arg1;
- (id)byRemovingPublishedMessageWithItemId:(id)arg1;
- (id)byAddingMessage:(id)arg1;
- (id)byTrimmingMessagesToOldestCursor:(id)arg1 userPK:(id)arg2;
- (id)byTrimmingMessagesToMessageCount:(long long)arg1 userPK:(id)arg2;
- (id)initWithThread:(id)arg1;

@end

