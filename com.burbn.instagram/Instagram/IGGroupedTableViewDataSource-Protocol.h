//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDataSource.h"

@class NSString, UITableView;

@protocol IGGroupedTableViewDataSource <UITableViewDataSource>

@optional
- (void)tableView:(UITableView *)arg1 didTapHeaderActionInSection:(long long)arg2;
- (NSString *)tableView:(UITableView *)arg1 actionTitleForHeaderInSection:(long long)arg2;
- (NSString *)tableView:(UITableView *)arg1 subtitleForHeaderInSection:(long long)arg2;
@end
