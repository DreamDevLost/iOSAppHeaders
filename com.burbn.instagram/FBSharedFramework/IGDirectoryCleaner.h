//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGDirectoryCleaner : NSObject
{
}

+ (void)_performFolderCleanup:(id)arg1 removeRootFolder:(_Bool)arg2;
+ (_Bool)trashItemAtPath:(id)arg1 error:(id *)arg2;
+ (id)_trashPath;
+ (id)_trashPathForPath:(id)arg1;
+ (void)startBackgroundTrashCleanupTask;

@end

