//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUser, IGViewControllerAnnouncer, NSString, UIBarButtonItem;

@protocol IGViewControllerType <NSObject>
+ (_Bool)isNavigationGestureOriginNearScreenEdge:(struct CGPoint)arg1;
@property(nonatomic) _Bool isDisplayedInPopover;
- (NSString *)getSurfaceName;
- (IGUser *)getViewerUser;
- (IGUser *)getTargetUser;
- (_Bool)shouldLogScreenshots;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)setRightBarButtonItem:(UIBarButtonItem *)arg1;
- (void)setLeftBarButtonItem:(UIBarButtonItem *)arg1;
- (void)showModalDismissButtonWithTitle:(NSString *)arg1 side:(long long)arg2;
- (IGViewControllerAnnouncer *)announcer;
- (id <IGTabBarControllerType>)igTabBarController;
- (_Bool)wantsLayoutOnKeyboardChanges;
- (_Bool)shouldConsiderSafeAreaForPreferredContentBottomInset;
- (_Bool)prefersTabBarHidden;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersNavigationBarDividerHidden;
@end

