//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGURLHandler : NSObject
{
}

+ (void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(_Bool)arg3 sourceURL:(id)arg4 sourceFeedItem:(id)arg5 ctaPresenterContext:(id)arg6 loggingProvider:(id)arg7 userSession:(id)arg8 analyticsModule:(id)arg9 sourceApplication:(id)arg10 supportSponsoredTracking:(_Bool)arg11;
+ (void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(_Bool)arg3 sourceURL:(id)arg4 userSession:(id)arg5 sourceApplication:(id)arg6;
+ (void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(_Bool)arg3 userSession:(id)arg4 sourceApplication:(id)arg5;
+ (void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(_Bool)arg3 userSession:(id)arg4;
+ (void)_openRelativeURL:(id)arg1 controller:(id)arg2 userPK:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(_Bool)arg3 controls:(_Bool)arg4 title:(id)arg5 showsPageTitle:(_Bool)arg6 animated:(_Bool)arg7 userPK:(id)arg8 completionHandler:(CDUnknownBlockType)arg9 cancelModalDismissHandler:(CDUnknownBlockType)arg10;
+ (void)openURL:(id)arg1 controller:(id)arg2 userSession:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)openURL:(id)arg1 userSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

