//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession;

@interface IGDirectSeenStateInconsistencyCorrector : NSObject
{
    IGUserSession *_userSession;
    id <IGDirectOutgoingUpdateSending> _outgoingUpdateSender;
}

- (void).cxx_destruct;
- (void)correctSeenStateForThreads:(id)arg1;
- (id)initWithUserSession:(id)arg1 outgoingUpdateSender:(id)arg2;

@end

