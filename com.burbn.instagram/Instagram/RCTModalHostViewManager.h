//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "RCTInvalidating.h"
#import "RCTModalHostViewInteractor.h"

@class NSHashTable, NSString;

@interface RCTModalHostViewManager : RCTViewManager <RCTModalHostViewInteractor, RCTInvalidating>
{
    NSHashTable *_hostViews;
    CDUnknownBlockType _presentationBlock;
    CDUnknownBlockType _dismissalBlock;
}

+ (id)propConfig_onOrientationChange;
+ (id)propConfig_supportedOrientations;
+ (id)propConfig_identifier;
+ (id)propConfig_onShow;
+ (id)propConfig_transparent;
+ (id)propConfig_presentationStyle;
+ (id)propConfig_animationType;
+ (void)load;
+ (id)moduleName;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property(copy, nonatomic) CDUnknownBlockType presentationBlock; // @synthesize presentationBlock=_presentationBlock;
- (void).cxx_destruct;
- (void)invalidate;
- (id)shadowView;
- (void)dismissModalHostView:(id)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;
- (void)presentModalHostView:(id)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

