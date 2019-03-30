//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQuickCamInputLibraryAsset.h"
#import "IGQuickCamInputPhotoAsset.h"

@class NSArray, NSDictionary, NSString, PHAsset, UIImage;

@interface IGQuickCamInputLibraryLivePhotoAsset : NSObject <IGQuickCamInputLibraryAsset, IGQuickCamInputPhotoAsset>
{
    _Bool _isLandscape;
    PHAsset *_phAsset;
    long long _devicePosition;
    long long _flashMode;
    UIImage *_previewImage;
    NSArray *_backgroundColors;
    long long _assetSource;
    struct NSDictionary *_metadata;
}

@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) long long assetSource; // @synthesize assetSource=_assetSource;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) NSArray *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(readonly, nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (void).cxx_destruct;
- (id)initWithPHAsset:(id)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

