//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGQuickCamOutputVideoAsset, IGStoryBoomerangManager;

@protocol IGStoryBoomerangManagerAssetDelegate <NSObject>
- (void)storyBoomerangManagerDidFailToGenerateAsset:(IGStoryBoomerangManager *)arg1;
- (void)storyBoomerangManager:(IGStoryBoomerangManager *)arg1 didGenerateAsset:(IGQuickCamOutputVideoAsset *)arg2;
- (void)storyBoomerangManagerDidStartGeneratingNewAsset:(IGStoryBoomerangManager *)arg1;
@end

