//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGEIUserDetailsDataSource, IGEIUserDetailsResponse;

@protocol IGEIUserDetailsDataSourceDelegate
- (void)userDetailsDataSourceDidFailFetching:(IGEIUserDetailsDataSource *)arg1;
- (void)userDetailsDataSource:(IGEIUserDetailsDataSource *)arg1 didFetchResponse:(IGEIUserDetailsResponse *)arg2;
@end

