//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGMultiFeedController;

@protocol IGMultiFeedControllerDelegate
- (void)multiFeedControllerDidFailLoadingSelectedFeed:(IGMultiFeedController *)arg1;
- (void)multiFeedControllerDidUpdateSelectedFeed:(IGMultiFeedController *)arg1 updateType:(unsigned long long)arg2;
- (void)multiFeedControllerDidFinishLoadingSelectedFeed:(IGMultiFeedController *)arg1;
- (void)multiFeedControllerDidFinishPreloading:(IGMultiFeedController *)arg1;
@end

