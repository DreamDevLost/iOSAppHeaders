//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGViewController<IGProfileTabViewController>;

@protocol IGProfileTabViewControllerDelegate
- (void)profileTabViewControllerDidInitiatePullToRefresh:(IGViewController<IGProfileTabViewController> *)arg1;
- (void)profileTabViewControllerNeedsContentOffsetUpdate:(IGViewController<IGProfileTabViewController> *)arg1;
- (_Bool)profileTabViewControllerIsDisplayedInPopover:(IGViewController<IGProfileTabViewController> *)arg1;
- (double)profileTabViewControllerAdditionalTopContentInset:(IGViewController<IGProfileTabViewController> *)arg1;
@end
