//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFollowController;

@protocol IGFollowControllerDelegate <NSObject>
- (void)followController:(IGFollowController *)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)followControllerDidDetectNewButtonState:(IGFollowController *)arg1;
- (void)followController:(IGFollowController *)arg1 buttonWasTappedWithAction:(long long)arg2;
@end

