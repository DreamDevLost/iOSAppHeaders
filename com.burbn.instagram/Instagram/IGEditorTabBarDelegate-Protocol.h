//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGEditorTabBar, UIView<IGEditorTabView>;

@protocol IGEditorTabBarDelegate <NSObject>
- (_Bool)tabBar:(IGEditorTabBar *)arg1 shouldSelectTabView:(UIView<IGEditorTabView> *)arg2;
- (void)tabBar:(IGEditorTabBar *)arg1 didSelectTabView:(UIView<IGEditorTabView> *)arg2 previousTabView:(UIView<IGEditorTabView> *)arg3;
@end

