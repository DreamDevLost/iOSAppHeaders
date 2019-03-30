//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NativeIGCommentModerationReactModuleSpec.h"
#import "RCTIGUserSessionModule.h"

@class IGUserSession, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface IGCommentModerationReactModule : NSObject <NativeIGCommentModerationReactModuleSpec, RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
}

+ (const struct RCTMethodInfo *)__rct_export__16311;
+ (const struct RCTMethodInfo *)__rct_export__15210;
+ (const struct RCTMethodInfo *)__rct_export__1439;
+ (const struct RCTMethodInfo *)__rct_export__1328;
+ (const struct RCTMethodInfo *)__rct_export__1207;
+ (const struct RCTMethodInfo *)__rct_export__1056;
+ (const struct RCTMethodInfo *)__rct_export__825;
+ (const struct RCTMethodInfo *)__rct_export__704;
+ (const struct RCTMethodInfo *)__rct_export__593;
+ (const struct RCTMethodInfo *)__rct_export__482;
+ (const struct RCTMethodInfo *)__rct_export__371;
+ (const struct RCTMethodInfo *)__rct_export__270;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)setCommentCategoryFilterDisabled:(_Bool)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)fetchCommentCategoryFilterDisabled:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)setCustomKeywords:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)setUseDefaultKeywords:(_Bool)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)openCommenterBlockingViewControllerWithReactTag:(double)arg1 blockedCommentersData:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setBlockedCommenters:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)_updateUserAllowedCommenterTypeString:(id)arg1;
- (void)setCommentAudienceControlType:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)fetchCurrentUser:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)fetchCommentFilterKeywords:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)fetchCommentFilter:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)fetchCommentAudienceControlType:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)fetchBlockedCommenters:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

