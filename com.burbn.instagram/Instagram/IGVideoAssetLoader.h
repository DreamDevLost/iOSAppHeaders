//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGVideoAssetLoader : NSObject
{
}

+ (id)_orderClipsFromDictionary:(id)arg1 forOrderedIdentifiers:(id)arg2;
+ (id)_videoClipForAVAsset:(id)arg1 identifier:(id)arg2 originalSource:(long long)arg3;
+ (void)_clipLoadingDidFinishWithClipsDictionary:(id)arg1 preselectedIdentifiers:(id)arg2 videoConfiguration:(id)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)_identifiersFromPreselectedIdentifiers:(id)arg1 shouldUseLocalIdentifier:(_Bool)arg2;
+ (void)_photosFramework_loadVideoFromAssetInMetadata:(id)arg1 videoConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)loadVideoFromAssetInMetadata:(id)arg1 videoConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

