//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (InstagramURL)
+ (void)translateShortURL:(id)arg1 deeplinkBlock:(CDUnknownBlockType)arg2 userSession:(id)arg3;
+ (_Bool)isValidExternalURL:(id)arg1;
+ (_Bool)isRegSMSConfirmDeepLinkURL:(id)arg1;
+ (_Bool)isFBAutoLoginURL:(id)arg1;
+ (_Bool)isLoginDeeplinkURL:(id)arg1;
+ (_Bool)isIgMeShortcodeURL:(id)arg1;
+ (id)internalURLWithFBDeeplinkURL:(id)arg1;
+ (id)internalURLWithExternalURL:(id)arg1 deeplinkBlock:(CDUnknownBlockType)arg2 userSession:(id)arg3;
+ (id)internalURLWithExternalURL:(id)arg1;
- (_Bool)ig_isInternal;
@end

