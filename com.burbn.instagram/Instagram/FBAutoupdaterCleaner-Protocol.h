//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAutoupdaterHost, NSString;

@protocol FBAutoupdaterCleaner <NSObject>
+ (id)new;
@property(readonly, nonatomic) FBAutoupdaterHost *host;
- (void)removeTemporaryFiles;
- (void)removeUnappliedUpdates;
- (void)removePath:(NSString *)arg1;
- (id)initWithHost:(FBAutoupdaterHost *)arg1;
- (id)init;

@optional
- (void)cleanUpAfterUpdateInstallationAttempt;
@end

