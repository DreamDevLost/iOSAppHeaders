//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSObject<OS_dispatch_queue>;

@interface FBAREngineEffectLifecycleListener : NSObject <NSSecureCoding>
{
    id <FBAREngineEffectLifecycleEffectDescriptor> _effectDescriptor;
    id <FBAREngineEffectLifecycleDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithEffectDescriptor:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <FBAREngineEffectLifecycleDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <FBAREngineEffectLifecycleEffectDescriptor> effectDescriptor; // @synthesize effectDescriptor=_effectDescriptor;
- (void).cxx_destruct;
- (void)notifyDidChangeToDifferentEffectForEffectWithAnalyticsIdentifier:(id)arg1 instanceAnalyticsIdentifier:(id)arg2;
- (void)notifyDidRenderFirstFrameForEffectWithAnalyticsIdentifier:(id)arg1 instanceAnalyticsIdentifier:(id)arg2;
- (void)notifyDidFailToLoadEffectWithFailureReason:(id)arg1 analyticsIdentifier:(id)arg2 instanceAnalyticsIdentifier:(id)arg3;
- (void)notifyDidLoadEffectWithAnalyticsIdentifier:(id)arg1 instanceAnalyticsIdentifier:(id)arg2 manifest:(shared_ptr_8f3f58d1)arg3 effectAttribution:(shared_ptr_f86b0e66)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectDescriptor:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end

