//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCoWatchPlaybackControllerProtocol.h"

@class IGUserSession, NSNumber, NSString, UIView;

@interface IGCoWatchPlaybackController : NSObject <IGCoWatchPlaybackControllerProtocol>
{
    UIView *_playbackContainerView;
    NSNumber *_currentMediaType;
    id <IGCoWatchPlaybackControllerProtocol> _currentPlaybackController;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)_resolvePlaybackControllerForMedia:(id)arg1;
- (id)contentView;
- (void)playMedia:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
