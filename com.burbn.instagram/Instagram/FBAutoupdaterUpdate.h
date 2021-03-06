//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSDictionary, NSString, NSURL;

@interface FBAutoupdaterUpdate : NSObject <NSCoding, NSCopying>
{
    NSString *_installPath;
    NSDate *_installDate;
    NSURL *_url;
    NSURL *_deltaUrl;
    NSString *_version;
    NSDictionary *_manifest;
    NSDictionary *_checksums;
    NSDictionary *_uncompressedFilesizeMap;
    long long _size;
    long long _deltaSize;
    long long _uncompressedSize;
    unsigned long long _allowedNetworks;
    NSString *_installFolderPrefix;
    NSString *_commit;
    NSString *_branch;
    NSString *_buildDate;
    NSString *_prodVersionName;
    NSString *_otaVersionName;
}

@property(copy, nonatomic) NSString *otaVersionName; // @synthesize otaVersionName=_otaVersionName;
@property(copy, nonatomic) NSString *prodVersionName; // @synthesize prodVersionName=_prodVersionName;
@property(copy, nonatomic) NSString *buildDate; // @synthesize buildDate=_buildDate;
@property(copy, nonatomic) NSString *branch; // @synthesize branch=_branch;
@property(copy, nonatomic) NSString *commit; // @synthesize commit=_commit;
@property(copy, nonatomic) NSString *installFolderPrefix; // @synthesize installFolderPrefix=_installFolderPrefix;
@property(nonatomic) unsigned long long allowedNetworks; // @synthesize allowedNetworks=_allowedNetworks;
@property(nonatomic) long long uncompressedSize; // @synthesize uncompressedSize=_uncompressedSize;
@property(nonatomic) long long deltaSize; // @synthesize deltaSize=_deltaSize;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSDictionary *uncompressedFilesizeMap; // @synthesize uncompressedFilesizeMap=_uncompressedFilesizeMap;
@property(copy, nonatomic) NSDictionary *checksums; // @synthesize checksums=_checksums;
@property(copy, nonatomic) NSDictionary *manifest; // @synthesize manifest=_manifest;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSURL *deltaUrl; // @synthesize deltaUrl=_deltaUrl;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(copy, nonatomic) NSString *installPath; // @synthesize installPath=_installPath;
- (void).cxx_destruct;
- (id)URLForActiveResource:(id)arg1 inHost:(id)arg2;
- (id)installPathInHost:(id)arg1;
@property(readonly, nonatomic) _Bool shouldBeDownloadedOnWifiOnly;
- (id)deltaProcessorWithDelegate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 version:(id)arg2 size:(long long)arg3;
- (id)initWithURL:(id)arg1 version:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

