//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGSideTrayItemSectionController.h"

@class IGSideTrayRowItemModel, IGUserSession;

@interface IGProfileSideTrayOrdersSectionController : IGListSectionController <IGSideTrayItemSectionController>
{
    IGSideTrayRowItemModel *_item;
    long long _badgeCount;
    IGUserSession *_userSession;
    id <IGSideTrayLoggingController> _loggingController;
    _Bool _profileIsInTabBar;
    id <IGSideTrayItemSectionControllerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <IGSideTrayItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateBadgeCount:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (_Bool)isBadged;
- (id)initWithUserSession:(id)arg1 profileIsInTabBar:(_Bool)arg2 delegate:(id)arg3 loggingController:(id)arg4;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 loggingController:(id)arg3;

@end
