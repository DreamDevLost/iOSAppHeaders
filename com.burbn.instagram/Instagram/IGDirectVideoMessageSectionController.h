//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectMessageSectionController.h"

#import "IGDirectVideoViewDelegate.h"

@class IGDirectVideoMessageViewModel, NSString;

@interface IGDirectVideoMessageSectionController : IGDirectMessageSectionController <IGDirectVideoViewDelegate>
{
    _Bool _didUnblurVideo;
}

@property(nonatomic) _Bool didUnblurVideo; // @synthesize didUnblurVideo=_didUnblurVideo;
- (_Bool)shouldLaunchZoomingWithZoomController:(id)arg1 gestureRecognizer:(id)arg2;
- (void)videoView:(id)arg1 didFailToPlayWithError:(id)arg2;
- (void)_presentMediaViewer;
- (void)_reloadSection;
- (void)handleSingleTapOfSendingOrSentMessageCell:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) IGDirectVideoMessageViewModel *viewModel; // @dynamic viewModel;

@end

