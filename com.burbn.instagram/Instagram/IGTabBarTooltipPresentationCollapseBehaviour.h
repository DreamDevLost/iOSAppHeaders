//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class UIView<IGTabBarTooltipCollapsible>;

@interface IGTabBarTooltipPresentationCollapseBehaviour : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    unsigned long long _collapse_badgeCount;
    UIView<IGTabBarTooltipCollapsible> *_collapse_collapsibleView;
}

+ (id)doNotCollapse;
+ (id)collapseWithBadgeCount:(unsigned long long)arg1 collapsibleView:(id)arg2;
- (void).cxx_destruct;
- (void)matchDoNotCollapse:(CDUnknownBlockType)arg1 collapse:(CDUnknownBlockType)arg2;

@end

