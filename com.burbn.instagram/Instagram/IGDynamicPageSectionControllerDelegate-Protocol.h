//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDynamicPageSectionController;

@protocol IGDynamicPageSectionControllerDelegate <NSObject>
- (void)dynamicPageSectionController:(IGDynamicPageSectionController *)arg1 willChangeToRepresentationStyle:(long long)arg2 previousRepresentationStyle:(long long)arg3;
- (void)dynamicPageSectionControllerDidEndBeingDisplayed:(IGDynamicPageSectionController *)arg1;
- (void)dynamicPageSectionControllerWillBeDisplayed:(IGDynamicPageSectionController *)arg1;
@end
