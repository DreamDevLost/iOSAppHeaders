//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGDirectInboxCursor;

@interface IGDirectInboxFetchCursor : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGDirectInboxCursor *_nextPage_cursor;
}

+ (id)nextPageWithCursor:(id)arg1;
+ (id)firstPage;
- (void).cxx_destruct;
- (void)matchFirstPage:(CDUnknownBlockType)arg1 nextPage:(CDUnknownBlockType)arg2;

@end
