//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGModalSheetPresentationCoordinator.h"

@class NSString;

@interface IGBrowserPresentationListener : NSObject <IGModalSheetPresentationCoordinator>
{
    id <IGBrowserPresentationDelegate> _delegate;
}

@property(retain, nonatomic) id <IGBrowserPresentationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)modalSheet:(id)arg1 didUpdatePresentationPercentage:(double)arg2;
- (void)modalSheet:(id)arg1 didEndPresentationTransition:(_Bool)arg2;
- (void)modalSheetDidLayoutSubviews:(id)arg1;
- (void)modalSheetWillBeginDismissalTransition:(id)arg1;
- (void)modalSheet:(id)arg1 didEndDismissalTransition:(_Bool)arg2;
- (void)modalSheetWillBeginPresentationTransition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
