//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGTag, IGTaggingViewController, NSArray;

@protocol IGTaggingViewControllerDelegate <NSObject>
- (void)taggingViewController:(IGTaggingViewController *)arg1 didRemoveTag:(IGTag *)arg2;
- (void)taggingViewControllerDidOpenSearch;
- (void)taggingViewControllerCancelled:(IGTaggingViewController *)arg1;
- (void)taggingViewController:(IGTaggingViewController *)arg1 finishedWithAssets:(NSArray *)arg2;
@end

