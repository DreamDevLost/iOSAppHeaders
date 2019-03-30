//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface IGDirectPendingInboxUpdateAction : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSArray *_approveThreadIds;
    NSArray *_declineThreadIds;
    NSString *_block_threadId;
    NSString *_demote_threadID;
    _Bool _accept_accept;
    NSString *_accept_userId;
}

+ (id)demoteWithThreadID:(id)arg1;
+ (id)declineThreadIds:(id)arg1;
+ (id)declineAll;
+ (id)blockWithThreadId:(id)arg1;
+ (id)approveThreadIds:(id)arg1;
+ (id)acceptWithAccept:(_Bool)arg1 userId:(id)arg2;
- (void).cxx_destruct;
- (_Bool)matchBooleanApproveThreadIds:(CDUnknownBlockType)arg1 declineThreadIds:(CDUnknownBlockType)arg2 declineAll:(CDUnknownBlockType)arg3 block:(CDUnknownBlockType)arg4 demote:(CDUnknownBlockType)arg5 accept:(CDUnknownBlockType)arg6;
- (void)matchApproveThreadIds:(CDUnknownBlockType)arg1 declineThreadIds:(CDUnknownBlockType)arg2 declineAll:(CDUnknownBlockType)arg3 block:(CDUnknownBlockType)arg4 demote:(CDUnknownBlockType)arg5 accept:(CDUnknownBlockType)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
