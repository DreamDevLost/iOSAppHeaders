//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAutoupdaterHost, FBAutoupdaterUpdate;

@protocol FBAutoupdaterCompatibilityChecker <NSObject>
- (_Bool)checkAndFixIfNeeded:(FBAutoupdaterUpdate *)arg1 host:(FBAutoupdaterHost *)arg2 error:(id *)arg3;
@end
