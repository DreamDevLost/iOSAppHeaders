//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGShareNUXController;

@protocol IGShareNUXControllerDelegate <NSObject>
- (void)autoSharingToFacebookOptionWasDismissed:(IGShareNUXController *)arg1;
- (void)autoSharingToFacebookOptionWasSelected:(IGShareNUXController *)arg1;
- (void)sharedNUXControllerConnectFacebookTooltipDidAppear:(IGShareNUXController *)arg1;
- (void)sharedNUXControllerTagFBFriendsTooltipDidAppear:(IGShareNUXController *)arg1;
- (void)tagProductsTooltipDidAppear:(IGShareNUXController *)arg1;
- (void)crossPostNUXWasDismissed:(IGShareNUXController *)arg1;
- (void)crossPostNUXDidAppear:(IGShareNUXController *)arg1;
@end

