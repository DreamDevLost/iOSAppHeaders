//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGListSectionController, IGMainFeedListItemContext, IGUserSession;

@protocol IGMainFeedListItem <NSObject>
- (IGListSectionController *)sectionControllerForContext:(IGMainFeedListItemContext *)arg1 userSession:(IGUserSession *)arg2;
- (unsigned long long)mainFeedListItemType;
@end

