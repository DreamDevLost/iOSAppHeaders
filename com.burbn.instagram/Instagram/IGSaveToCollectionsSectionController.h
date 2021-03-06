//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGSaveToCollectionsThumbnailModel, NSString;

@interface IGSaveToCollectionsSectionController : IGListSectionController
{
    NSString *_module;
    _Bool _useLegacyCells;
    id <IGSaveToCollectionsSectionControllerDelegate> _delegate;
    IGSaveToCollectionsThumbnailModel *_thumbnailModel;
}

@property(retain, nonatomic) IGSaveToCollectionsThumbnailModel *thumbnailModel; // @synthesize thumbnailModel=_thumbnailModel;
@property(nonatomic) __weak id <IGSaveToCollectionsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_viewModelForCollection:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithCollections:(id)arg1 useLegacyCells:(_Bool)arg2 delegate:(id)arg3 module:(id)arg4;

@end

