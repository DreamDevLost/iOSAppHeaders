//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGNUXUsersDataSource, NSArray, NSError;

@protocol IGNUXUsersDataSourceDelegate
- (void)nuxUsersViewDataSource:(IGNUXUsersDataSource *)arg1 didFailWithError:(NSError *)arg2;
- (void)nuxUsersViewDataSource:(IGNUXUsersDataSource *)arg1 didLoadUserList:(NSArray *)arg2;
@end
