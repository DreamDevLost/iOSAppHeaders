//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGHashtagModel, IGUser;

@interface IGKeywordSearchEntity : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGUser *_user;
    IGHashtagModel *_hashtag;
}

+ (id)user:(id)arg1;
+ (id)hashtag:(id)arg1;
- (void).cxx_destruct;
- (void)matchUser:(CDUnknownBlockType)arg1 hashtag:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanUser:(CDUnknownBlockType)arg1 hashtag:(CDUnknownBlockType)arg2;

@end

