//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMinimizableContainerViewController, IGMinimizableMode;

@interface IGMinimizableContext : NSObject
{
    IGMinimizableMode *_mode;
    IGMinimizableContainerViewController *_containerViewController;
}

@property(nonatomic) __weak IGMinimizableContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(copy, nonatomic) IGMinimizableMode *mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)invalidateContext;
- (void)dismissContextAnimated:(_Bool)arg1;
- (_Bool)maximizeContextAnimated:(_Bool)arg1;
- (_Bool)minimizeContextAnimated:(_Bool)arg1;

@end

