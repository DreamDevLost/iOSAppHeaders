//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import "IGListDiffable.h"

@class NSString;

@interface IGInfoViewModel : FBIvarBasedEqualityObject <IGListDiffable>
{
    unsigned long long _subtype;
    NSString *_refresh_title;
    NSString *_refresh_subtitle;
}

+ (id)refreshWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)loading;
+ (id)hidden;
- (void).cxx_destruct;
- (void)matchHidden:(CDUnknownBlockType)arg1 loading:(CDUnknownBlockType)arg2 refresh:(CDUnknownBlockType)arg3;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

@end
