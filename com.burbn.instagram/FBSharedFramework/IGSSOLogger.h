//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IGSSOLogger : NSObject
{
    _Bool _isComplete;
    NSMutableDictionary *_extras;
    NSObject<OS_dispatch_queue> *_serialQueue;
    double _viewControllerInitializationStartTime;
}

+ (id)sharedInstance;
@property _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) double viewControllerInitializationStartTime; // @synthesize viewControllerInitializationStartTime=_viewControllerInitializationStartTime;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSMutableDictionary *extras; // @synthesize extras=_extras;
- (void).cxx_destruct;
- (void)_markTimeForEvent:(id)arg1;
- (void)_cancelForReason:(id)arg1;
- (void)_timeout;
- (void)_backgrounded;
- (void)_completeSSOProcess;
- (void)markSSOContinueAsNetworkRequestResponseReceived;
- (void)markSSOContinueAsNetworkRequestSubmitted;
- (void)markSSOFetchDeviceIDStarted;
- (void)markLoginViewControllerViewDidLoadStarted;
- (void)markLoginViewControllerInitializationStarted;
- (id)init;

@end

