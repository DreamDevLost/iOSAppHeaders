//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBFilterContext, NSDictionary;

@interface FBFilter : NSObject
{
    struct mutex _callbacksMutex;
    struct vector<std::__1::pair<void (^)(bool, double), NSObject<OS_dispatch_queue>*>, std::__1::allocator<std::__1::pair<void (^)(bool, double), NSObject<OS_dispatch_queue>*>>> _callbacks;
    _Bool _isMultiMode;
    NSDictionary *_traits;
    FBFilterContext *_filterContext;
    NSDictionary *_parameters;
}

@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) FBFilterContext *filterContext; // @synthesize filterContext=_filterContext;
@property(readonly, copy, nonatomic) NSDictionary *traits; // @synthesize traits=_traits;
@property(readonly) _Bool isMultiMode; // @synthesize isMultiMode=_isMultiMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)processPendingNextFrameRenderedCallbacksWithResult:(_Bool)arg1;
- (void)requestNextFrameRenderedCallback:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (id)traitWithClass:(Class)arg1;
- (void)finalizeRendering;
- (void)processCommand:(id)arg1;
- (_Bool)render:(id)arg1 to:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
@property(readonly, nonatomic) unsigned long long outputPixelFormat;
@property(readonly, nonatomic) unsigned long long inputPixelFormat;
- (id)init;

@end

