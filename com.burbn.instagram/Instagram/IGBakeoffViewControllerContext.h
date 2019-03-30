//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBakeoffPairList, IGListAdapter, IGUserSession;

@interface IGBakeoffViewControllerContext : NSObject
{
    IGUserSession *_userSession;
    long long _currentPairIndex;
    IGBakeoffPairList *_pairList;
    IGListAdapter *_listAdapter;
}

- (void).cxx_destruct;
- (_Bool)haveAllItemsSeenForCurrentConparsion;
- (void)proceedToNextPair;
- (id)feedItemForCurrentComparsionWithIndex:(long long)arg1;
- (long long)currentPairIndex;
- (id)currentSectionController;
- (id)initWithUserSession:(id)arg1 listAdapter:(id)arg2 pairList:(id)arg3;

@end
