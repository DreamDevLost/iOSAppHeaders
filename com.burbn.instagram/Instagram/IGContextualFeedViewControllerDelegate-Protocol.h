//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGContextualFeedViewController;

@protocol IGContextualFeedViewControllerDelegate <NSObject>
- (void)contextualFeedViewControllerWillDismiss:(IGContextualFeedViewController *)arg1;
- (void)contextualFeedViewControllerWillShowPill:(IGContextualFeedViewController *)arg1;
- (_Bool)didShowPillInCurrentSession:(IGContextualFeedViewController *)arg1;
@end
