//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAutoupdaterInstaller.h"

@class NSFileManager, NSObject<OS_dispatch_queue>, NSString;

@interface FBAutoupdaterDefaultInstaller : NSObject <FBAutoupdaterInstaller>
{
    NSObject<OS_dispatch_queue> *_removalQueue;
    NSString *_updateInstallFolderExtension;
    NSFileManager *_fileManager;
}

@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (_Bool)_createPathIfNeeded:(id)arg1 error:(id *)arg2;
- (id)_setMetadataForUpdate:(id)arg1 basePath:(id)arg2;
- (_Bool)_verifyInstallPreconditionsFromPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)_saveMetadataForUpdate:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)installFolderForUpdate:(id)arg1;
- (_Bool)install:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 metadataFilename:(id)arg4 error:(id *)arg5;
- (id)installedUpdatesForHost:(id)arg1;
- (_Bool)isUpdateInstalledAtPath:(id)arg1 metadataFilename:(id)arg2;
- (id)loadUpdateFromPath:(id)arg1 metadataFilename:(id)arg2 error:(id *)arg3;
- (id)updateInstallFolderExtension;
- (id)initWithUpdateInstallFolderExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

