//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@interface FBAutoupdaterReactAssetsResolver : NSObject
{
    NSString *_embeddedBundleAssetsPath;
    NSString *_manifestPath;
    NSString *_otaBundleAssetsPath;
    NSString *_otaBundlePath;
    NSSet *_resolvedAssetsSet;
    _Bool _allowImageUpdate;
}

@property(copy, nonatomic) NSString *otaBundlePath; // @synthesize otaBundlePath=_otaBundlePath;
@property(nonatomic) _Bool allowImageUpdate; // @synthesize allowImageUpdate=_allowImageUpdate;
- (void).cxx_destruct;
- (void)loadResolverManifestIfNeeded;
- (id)resolveAssetsURL:(id)arg1;
- (id)initWithEmbeddedBundlePath:(id)arg1;

@end

