//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGMainAppControllerDirectThreadItem : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_threadId;
    NSString *_userId;
}

+ (id)userId:(id)arg1;
+ (id)threadId:(id)arg1;
- (void).cxx_destruct;
- (void)matchThreadId:(CDUnknownBlockType)arg1 userId:(CDUnknownBlockType)arg2;

@end

