//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKStoreProductViewControllerDelegate.h"

@class NSString;

@interface IGMessengerDotMeURLHandler : NSObject <SKStoreProductViewControllerDelegate>
{
}

- (id)_messengerDeepLinkUrlFromUrl:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (_Bool)handleMessengerDotMeURL:(id)arg1 viewController:(id)arg2 dismissVCOnDeeplink:(_Bool)arg3;
- (_Bool)isMessengerDotMeURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

