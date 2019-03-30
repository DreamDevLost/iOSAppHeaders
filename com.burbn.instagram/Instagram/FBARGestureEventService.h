//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBARGestureIDStore, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface FBARGestureEventService : NSObject
{
    NSObject<OS_dispatch_queue> *_gestureQueue;
    shared_ptr_6e0e6635 _engineTouchGesturesDataProvider;
    NSMutableArray *_queuedGestures;
    FBARGestureIDStore *_gestureIDStore;
    _Bool _tapGesturesEnabled;
    _Bool _panGesturesEnabled;
    _Bool _pinchGesturesEnabled;
    _Bool _rotationGesturesEnabled;
    _Bool _longPressGesturesEnabled;
    _Bool _rawTouchGesturesEnabled;
}

@property(nonatomic) _Bool rawTouchGesturesEnabled; // @synthesize rawTouchGesturesEnabled=_rawTouchGesturesEnabled;
@property(nonatomic) _Bool longPressGesturesEnabled; // @synthesize longPressGesturesEnabled=_longPressGesturesEnabled;
@property(nonatomic) _Bool rotationGesturesEnabled; // @synthesize rotationGesturesEnabled=_rotationGesturesEnabled;
@property(nonatomic) _Bool pinchGesturesEnabled; // @synthesize pinchGesturesEnabled=_pinchGesturesEnabled;
@property(nonatomic) _Bool panGesturesEnabled; // @synthesize panGesturesEnabled=_panGesturesEnabled;
@property(nonatomic) _Bool tapGesturesEnabled; // @synthesize tapGesturesEnabled=_tapGesturesEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dispatchUnconsumedGesturesBackToProduct;
- (void)_queueRawTouchGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 screenScale:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queueLongPressGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 screenScale:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queueRotationGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 rotation:(double)arg4 screenScale:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_queuePinchGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 scale:(double)arg4 screenScale:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_queuePanGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 translation:(struct CGPoint)arg4 velocity:(struct CGPoint)arg5 screenScale:(double)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_queueTapGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 screenScale:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queueGesture:(shared_ptr_549641cb)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_discreteGestureIDForUUID:(id)arg1;
- (unsigned long long)_continuousGestureIDForUUID:(id)arg1 phase:(long long)arg2;
- (void)dispatchUnconsumedGesturesBackToProduct;
- (void)queueRawTouchGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 screenScale:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)queueLongPressGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 screenScale:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)queueRotationGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 rotation:(double)arg4 screenScale:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)queuePinchGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 scale:(double)arg4 screenScale:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)queuePanGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 translation:(struct CGPoint)arg4 velocity:(struct CGPoint)arg5 screenScale:(double)arg6 completion:(CDUnknownBlockType)arg7;
- (void)queueTapGestureWithUUID:(id)arg1 phase:(long long)arg2 atLocation:(struct CGPoint)arg3 screenScale:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;
@property(readonly, nonatomic) shared_ptr_6e0e6635 engineTouchGesturesDataProvider;

@end
