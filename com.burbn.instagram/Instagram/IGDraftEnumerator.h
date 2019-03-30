//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSMutableDictionary, NSOrderedSet, NSURL;

@interface IGDraftEnumerator : NSEnumerator
{
    NSURL *_previewsBaseURL;
    CDUnknownBlockType _draftFilterBlock;
    NSMutableDictionary *_filteredPreviewCache;
    NSOrderedSet *_sortedPreviewFileURLs;
    NSEnumerator *_fileURLEnumerator;
}

+ (id)_sortedFileURLSetFromArray:(id)arg1;
+ (id)_sortedFileURLsAtBaseURL:(id)arg1;
- (void).cxx_destruct;
- (id)_previewAtFileURL:(id)arg1;
- (id)_objectAtFileURL:(id)arg1;
- (id)oldDraftsAtBaseURL:(id)arg1;
- (long long)estimatedTotalCount;
- (void)addPreviewAtPreviewURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removePreviewAtPreviewURL:(id)arg1;
- (void)reset;
- (id)allObjects;
- (id)nextObject;
- (id)_sortedPreviewFileURLs;
- (id)initWithPreviewsBaseURL:(id)arg1 filter:(CDUnknownBlockType)arg2;

@end

