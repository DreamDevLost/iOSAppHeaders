//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBQuickPerformanceLoggerCommon.h>

@interface IGQuickPerformanceLogger : FBQuickPerformanceLoggerCommon
{
    struct shared_ptr<instagram::perflogger::IGQuickPerformanceLoggerDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)getSamplingRateForMarkerID:(int)arg1;
- (void)overrideSamplingRatesForMarkers:(struct unordered_map<int, int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, int>>> *)arg1;
- (shared_ptr_e62c5e43)xplatLogger;
- (id)init;
- (id)initWithDelegate:(shared_ptr_977e1777)arg1;

@end

