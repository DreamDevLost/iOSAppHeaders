//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDynamicOverlayModel, IGSurface, UIImage;

@interface IGDynamicOverlay : NSObject
{
    IGDynamicOverlayModel *_dynamicOverlayModel;
    IGSurface *_currentSurface;
    UIImage *_currentImage;
}

@property(readonly, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(readonly, nonatomic) IGSurface *currentSurface; // @synthesize currentSurface=_currentSurface;
@property(readonly, nonatomic) IGDynamicOverlayModel *dynamicOverlayModel; // @synthesize dynamicOverlayModel=_dynamicOverlayModel;
- (void).cxx_destruct;
- (union _GLKMatrix4)_overlayTransformForDestinationSurface:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (id)_surfaceForTime:(CDStruct_1b6d18a9)arg1;
- (id)_initWithDynamicOverlayModel:(id)arg1;

@end

