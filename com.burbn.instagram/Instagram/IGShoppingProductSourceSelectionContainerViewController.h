//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTabPageViewController.h"

#import "IGTabPageViewControllerDelegate.h"

@class IGUserSession, NSString;

@interface IGShoppingProductSourceSelectionContainerViewController : IGTabPageViewController <IGTabPageViewControllerDelegate>
{
    IGUserSession *_userSession;
    NSString *_entryPoint;
    NSString *_priorModule;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)pageViewController:(id)arg1 didPageToViewController:(id)arg2;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 entryPoint:(id)arg2 priorModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

