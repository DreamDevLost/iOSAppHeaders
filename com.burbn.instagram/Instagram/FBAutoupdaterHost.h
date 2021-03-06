//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSString;

@interface FBAutoupdaterHost : NSObject
{
    NSFileManager *_fileManager;
    NSString *_activeUpdatePath;
    NSString *_appliedUpdateSymlink;
    NSString *_autoupdaterDirectory;
    NSString *_baseDirectory;
    NSString *_bundledUpdatePath;
    NSString *_bundledUpdateVersion;
    NSString *_compatibilityVersion;
    NSString *_groupIdentifier;
    NSString *_libraryDirectory;
    NSString *_scope;
    NSString *_temporaryDirectory;
    NSString *_updatesDirectory;
}

@property(copy, nonatomic) NSString *updatesDirectory; // @synthesize updatesDirectory=_updatesDirectory;
@property(copy, nonatomic) NSString *temporaryDirectory; // @synthesize temporaryDirectory=_temporaryDirectory;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *libraryDirectory; // @synthesize libraryDirectory=_libraryDirectory;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(copy, nonatomic) NSString *bundledUpdateVersion; // @synthesize bundledUpdateVersion=_bundledUpdateVersion;
@property(copy, nonatomic) NSString *bundledUpdatePath; // @synthesize bundledUpdatePath=_bundledUpdatePath;
@property(copy, nonatomic) NSString *baseDirectory; // @synthesize baseDirectory=_baseDirectory;
@property(copy, nonatomic) NSString *autoupdaterDirectory; // @synthesize autoupdaterDirectory=_autoupdaterDirectory;
@property(copy, nonatomic) NSString *appliedUpdateSymlink; // @synthesize appliedUpdateSymlink=_appliedUpdateSymlink;
@property(copy, nonatomic) NSString *activeUpdatePath; // @synthesize activeUpdatePath=_activeUpdatePath;
- (void).cxx_destruct;
- (id)metadataFilename;
- (id)appBundle;
- (id)allAppliedPaths;
- (id)latestUpdate;
- (_Bool)activateAppliedUpdate;
- (id)initWithScope:(id)arg1 compatibilityVersion:(id)arg2 bundledUpdatePath:(id)arg3 bundledUpdateVersion:(id)arg4 groupIdentifier:(id)arg5;

@end

