//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGListAdapterScrollingContext, NSString;

@interface IGMainFeedListItemContextBuilder : NSObject
{
    IGListAdapterScrollingContext *_scrollingContext;
    NSString *_module;
}

+ (id)mainFeedListItemContextFromExistingMainFeedListItemContext:(id)arg1;
+ (id)mainFeedListItemContext;
- (void).cxx_destruct;
- (id)withModule:(id)arg1;
- (id)withScrollingContext:(id)arg1;
- (id)build;

@end

