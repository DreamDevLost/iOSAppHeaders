//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGModuleItem, IGModuleLayoutRepresentation;

@protocol IGResourceSchedulerStateListener <NSObject>
- (void)moduleItem:(IGModuleItem *)arg1 didTransitionFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)currentModuleDidUpdateToState:(IGModuleLayoutRepresentation *)arg1 change:(unsigned long long)arg2;
- (void)moduleDidChangeTo:(IGModuleLayoutRepresentation *)arg1;
@end

