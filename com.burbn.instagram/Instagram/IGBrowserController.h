//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBrowserViewControllerDelegate.h"

@class NSString;

@interface IGBrowserController : NSObject <IGBrowserViewControllerDelegate>
{
    id <IGBrowserControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBrowserControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)browserViewControllerDidDismiss:(id)arg1;
- (void)browserViewControllerDidFinishWithUrl:(id)arg1 uid:(id)arg2;
- (id)_browserViewControllerForBrowserSession:(id)arg1 presentingPanGesture:(id)arg2;
- (void)presentBrowserWithBrowserSession:(id)arg1 viewController:(id)arg2 presentingPanGesture:(id)arg3;
- (void)presentBrowserWithBrowserSession:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

