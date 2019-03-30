//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBusinessItemSelectionTableViewController, NSArray, NSError, NSURL, UITableView;

@protocol IGBusinessItemSelectionTableViewDelegate <NSObject>
- (void)itemSelectionTableViewControllerDidTapExtraItem:(IGBusinessItemSelectionTableViewController *)arg1;
- (void)itemSelectionTableViewControllerDidTapContinueButton:(IGBusinessItemSelectionTableViewController *)arg1;
- (void)itemSelectionTableViewControllerFailedToFetchItems:(IGBusinessItemSelectionTableViewController *)arg1 error:(NSError *)arg2;
- (void)itemSelectionTableViewControllerDidReceiveItems:(IGBusinessItemSelectionTableViewController *)arg1;
- (void)itemSelectionTableViewController:(IGBusinessItemSelectionTableViewController *)arg1 didEndFetchingItems:(NSArray *)arg2 oldItems:(NSArray *)arg3 andError:(NSError *)arg4;
- (void)itemSelectionTableViewControllerDidStartFetchingItems:(IGBusinessItemSelectionTableViewController *)arg1;
- (void)pageSelectionViewControllerDidClickCreateOnePage:(IGBusinessItemSelectionTableViewController *)arg1 allowUserInteraction:(_Bool)arg2 withURL:(NSURL *)arg3;
- (void)itemSelectionView:(UITableView *)arg1 didSelectRowAtIndex:(long long)arg2;
@end
