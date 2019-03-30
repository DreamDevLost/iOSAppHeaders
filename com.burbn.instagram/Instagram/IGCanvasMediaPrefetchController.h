//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMediaPreloaderPhotoProgressDelegate.h"

@class IGImagePreparer, IGMediaPreloader, NSMutableSet, NSString;

@interface IGCanvasMediaPrefetchController : NSObject <IGMediaPreloaderPhotoProgressDelegate>
{
    IGImagePreparer *_imagePreparer;
    IGMediaPreloader *_preloader;
    NSMutableSet *_prefetchedDocuments;
}

+ (id)_prefetchedItems;
- (void).cxx_destruct;
- (void)_prefetchWithDocument:(id)arg1 priority:(long long)arg2 prefetchAllMedia:(_Bool)arg3 module:(id)arg4;
- (void)mediaPreloader:(id)arg1 didFailPhotoForItem:(id)arg2 url:(id)arg3;
- (void)mediaPreloader:(id)arg1 didLoadPhotoForItem:(id)arg2 url:(id)arg3 loadSource:(unsigned long long)arg4;
- (_Bool)hasPrefetchedMediaForDocumentId:(id)arg1;
- (void)prefetchMediaForCanvasDocument:(id)arg1 isOnScreen:(_Bool)arg2 module:(id)arg3;
- (id)initWithWidth:(double)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

