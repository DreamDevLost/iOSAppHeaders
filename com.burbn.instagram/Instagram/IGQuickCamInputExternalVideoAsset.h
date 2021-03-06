//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQuickCamExternalInputAsset.h"
#import "IGQuickCamVideoInfoType.h"

@class IGVideoInfo, NSArray, NSDictionary, NSString, UIImage;

@interface IGQuickCamInputExternalVideoAsset : NSObject <IGQuickCamExternalInputAsset, IGQuickCamVideoInfoType>
{
    _Bool _isLandscape;
    long long _devicePosition;
    UIImage *_previewImage;
    NSArray *_backgroundColors;
    long long _assetSource;
    IGVideoInfo *_videoInfo;
    NSString *_sourceApplication;
    struct NSDictionary *_metadata;
    long long _flashMode;
}

@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(readonly, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(readonly, nonatomic) long long assetSource; // @synthesize assetSource=_assetSource;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) NSArray *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
- (void).cxx_destruct;
- (id)initWithVideoInfo:(id)arg1 sourceApplication:(id)arg2 sourceType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

