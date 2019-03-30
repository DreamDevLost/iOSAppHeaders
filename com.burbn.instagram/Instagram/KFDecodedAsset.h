//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KFDocumentPropertiesProtocol.h"

@class KFDocumentPluginProvider, KFInteractivityContext, KFLayerTagsController, KFPluginsController, NSDictionary, NSMutableData, NSMutableDictionary, NSString;

@interface KFDecodedAsset : NSObject <KFDocumentPropertiesProtocol>
{
    NSMutableData *_data;
    struct Document *_document;
    NSMutableDictionary *_mutableBitmaps;
    double _documentDuration;
    struct mutex _acquisitionMutex;
    _Bool _acquired;
    struct vector<KFDecodedAsset *, std::__1::allocator<KFDecodedAsset *>> _subdocumentAssets;
    KFPluginsController *_pluginsController;
    KFDocumentPluginProvider *_pluginProvider;
    KFLayerTagsController *_layerTagsController;
    KFInteractivityContext *_interactivityContext;
    CDUnknownBlockType _bitmapFilter;
    NSDictionary *_bitmaps;
    NSDictionary *_bitmapOverrides;
}

@property(readonly, nonatomic) NSDictionary *bitmapOverrides; // @synthesize bitmapOverrides=_bitmapOverrides;
@property(readonly, nonatomic) NSDictionary *bitmaps; // @synthesize bitmaps=_bitmaps;
@property(readonly, nonatomic) const struct Document *document; // @synthesize document=_document;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)acquire;
- (id)subdocumentAssetAtIndex:(unsigned long long)arg1;
- (void)enumerateDocumentsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePluginsControllersWithBlock:(CDUnknownBlockType)arg1;
- (id)layerTagsController;
- (id)interactivityContext;
- (void)setInteractivityContext:(id)arg1;
- (id)pluginProvider;
- (unsigned long long)numSubdocuments;
- (id)pluginsController;
- (_Bool)_enumerateDocumentsWithBlock:(CDUnknownBlockType)arg1;
- (void)_walkTree:(const struct Layer *)arg1 block:(CDUnknownBlockType)arg2;
- (id)_overriddenBitmapForBitmap:(const struct Bitmap *)arg1;
- (void)_createSubdocumentAssetAtIndex:(unsigned long long)arg1;
- (void)_createSubdocumentAssets;
@property(readonly, nonatomic) struct CGSize intrinsicSize;
@property(readonly, nonatomic) double animationDuration;
- (id)addBitmap:(id)arg1;
- (void)replaceBitmapNamed:(id)arg1 withBitmap:(id)arg2;
- (id)initWithData:(id)arg1 bitmapFilter:(CDUnknownBlockType)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithKeyframesDocument:(struct Document *)arg1 bitmapOverrides:(id)arg2 bitmapFilter:(CDUnknownBlockType)arg3;
- (id)initWithKeyframesDocument:(struct Document *)arg1 bitmapOverrides:(id)arg2;
- (id)initWithKeyframesDocument:(struct Document *)arg1;
- (void)fireInteractivityEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
