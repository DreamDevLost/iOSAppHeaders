//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGReachabilityAnnouncerAdaptor : NSObject
{
    function_5936182b _reachabilityStateCallback;
    long long _reachabilityState;
}

@property long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_reachabilityDidChange:(id)arg1;
- (id)initWithReachabilityStateCallback:(function_5936182b *)arg1;

@end

