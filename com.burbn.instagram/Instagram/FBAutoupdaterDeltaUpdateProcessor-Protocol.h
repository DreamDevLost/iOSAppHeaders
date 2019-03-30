//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAutoupdaterHost, FBAutoupdaterUpdate, NSDictionary, NSString;

@protocol FBAutoupdaterDeltaUpdateProcessor <NSObject>
- (_Bool)processPatchUpdate:(FBAutoupdaterUpdate *)arg1 atPath:(NSString *)arg2 source:(NSString *)arg3 destination:(NSString *)arg4 host:(FBAutoupdaterHost *)arg5 error:(id *)arg6;
- (NSDictionary *)readDeltaUpdateManifestAtUpdatePath:(NSString *)arg1 error:(id *)arg2;
- (NSString *)manifestFilename;
@end
