//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGIOSLink, IGStoryLinkCreationViewController;

@protocol IGStoryLinkCreationViewControllerDelegate <NSObject>
- (void)storyLinkCreationViewControllerDidCloseForm:(IGStoryLinkCreationViewController *)arg1 hasChanges:(_Bool)arg2;
- (void)storyLinkCreationViewController:(IGStoryLinkCreationViewController *)arg1 didSelectStoryLink:(IGIOSLink *)arg2;
@end

