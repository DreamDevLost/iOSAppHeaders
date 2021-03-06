//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGNavigationEventListener.h"

@class IGNavigationEventData;

@interface IGNavigationEventManager : NSObject <IGNavigationEventListener>
{
    IGNavigationEventData *_lastNavigationEvent;
}

+ (id)currentModule;
+ (id)lastKNavigationEvents:(unsigned long long)arg1;
+ (id)sharedNavigationEventManager;
@property(retain, nonatomic) IGNavigationEventData *lastNavigationEvent; // @synthesize lastNavigationEvent=_lastNavigationEvent;
- (void).cxx_destruct;
- (void)_logNavigationEvent;
- (void)_mergeCurrentNavigationEventWithNavigationInfo:(id)arg1;
- (void)_flushCurrentNavigationEventForAppearingViewController:(id)arg1;
- (void)_handleNavigationViaClickPoint:(id)arg1 extraInfo:(id)arg2;
- (void)_handleNavigationViaClickPoint:(id)arg1;
- (void)_urlTapped:(id)arg1;
- (void)_moreTapped:(id)arg1;
- (void)_commentButtonTapped:(id)arg1;
- (void)_locationTapped:(id)arg1;
- (void)_userTapped:(id)arg1;
- (void)viewControllerDidAppear:(id)arg1;
- (void)_logAppStateEvent:(id)arg1 moduleKey:(id)arg2;
- (void)_handleAppWillResignActive:(id)arg1;
- (void)_handleAppDidForeground:(id)arg1;
- (void)_addNavigationEvent:(id)arg1;
- (id)init;
- (void)dealloc;

@end

