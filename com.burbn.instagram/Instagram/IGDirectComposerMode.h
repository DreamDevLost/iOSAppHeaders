//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@interface IGDirectComposerMode : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    long long _search_searchMode;
}

+ (id)text;
+ (id)searchWithSearchMode:(long long)arg1;
+ (id)none;
+ (id)expanded;
+ (id)default;
- (void)matchNone:(CDUnknownBlockType)arg1 default:(CDUnknownBlockType)arg2 text:(CDUnknownBlockType)arg3 search:(CDUnknownBlockType)arg4 expanded:(CDUnknownBlockType)arg5;
- (_Bool)matchBooleanNone:(CDUnknownBlockType)arg1 default:(CDUnknownBlockType)arg2 text:(CDUnknownBlockType)arg3 search:(CDUnknownBlockType)arg4 expanded:(CDUnknownBlockType)arg5;

@end

