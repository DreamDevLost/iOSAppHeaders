//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGStoryCreationViewControllerNavigationDelegate.h"

@class IGStoryCreationConfiguration, NSString, UIView, UIViewController;

@protocol IGDirectCameraPresentationManagerProtocol <IGStoryCreationViewControllerNavigationDelegate>
- (void)presentWithConfiguration:(IGStoryCreationConfiguration *)arg1 entryPoint:(unsigned long long)arg2 cameraTargetEffectId:(NSString *)arg3 switcherMode:(long long)arg4 delegate:(id <IGDirectCameraPresentationManagerDelegate>)arg5 navigationDelegate:(id <IGStoryCreationViewControllerNavigationDelegate>)arg6 fromController:(UIViewController *)arg7 anchorView:(UIView *)arg8 anchorPointInView:(struct CGPoint)arg9 sourceIdentifier:(id)arg10 animated:(_Bool)arg11 completion:(void (^)(void))arg12;
@end

