//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryReappearingTrayController;

@protocol IGStoryReappearingTrayControllerDelegate <NSObject>
- (_Bool)reappearingTrayControllerCanReappear:(IGStoryReappearingTrayController *)arg1;
- (void)reappearingTrayController:(IGStoryReappearingTrayController *)arg1 updateTopTrayPercentVisable:(double)arg2 withAdditionalOffset:(double)arg3;
- (void)reappearingTrayController:(IGStoryReappearingTrayController *)arg1 updateTopTrayCollapsed:(_Bool)arg2 withAnimation:(_Bool)arg3;
@end

