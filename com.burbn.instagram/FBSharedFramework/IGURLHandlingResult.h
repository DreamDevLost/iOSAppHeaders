//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class FBGeneratedIntentTarget, IGMainAppSurfaceIntent, NSString;

@interface IGURLHandlingResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    FBGeneratedIntentTarget *_intentTarget_intentTarget;
    IGMainAppSurfaceIntent *_mainAppSurfaceIntent_mainAppSurfaceIntent;
    NSString *_error_message;
}

+ (id)noOp;
+ (id)mainAppSurfaceIntentWithMainAppSurfaceIntent:(id)arg1;
+ (id)intentTargetWithIntentTarget:(id)arg1;
+ (id)errorWithMessage:(id)arg1;
- (void).cxx_destruct;
- (void)matchIntentTarget:(CDUnknownBlockType)arg1 mainAppSurfaceIntent:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3 noOp:(CDUnknownBlockType)arg4;

@end

