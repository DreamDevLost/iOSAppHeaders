//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGModuleItem;

@interface IGModuleItemStateChange : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGModuleItem *_added_item;
    IGModuleItem *_removed_item;
}

+ (id)removedWithItem:(id)arg1;
+ (id)addedWithItem:(id)arg1;
- (void).cxx_destruct;
- (void)matchAdded:(CDUnknownBlockType)arg1 removed:(CDUnknownBlockType)arg2;

@end

