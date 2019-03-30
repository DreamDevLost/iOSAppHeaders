//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGUploadCoverPhotoCoordinator : NSObject
{
    id <IGUploadCoverPhotoCoordinatorDelegate> _delegate;
    _Bool _isCoverUploadDecisionFinalized;
    _Bool _useRenderedFrame;
    _Bool _useGenerateCoverFromRenderedVideo;
}

@property(readonly, nonatomic) _Bool useGenerateCoverFromRenderedVideo; // @synthesize useGenerateCoverFromRenderedVideo=_useGenerateCoverFromRenderedVideo;
@property(readonly, nonatomic) _Bool useRenderedFrame; // @synthesize useRenderedFrame=_useRenderedFrame;
@property(readonly, nonatomic) _Bool isCoverUploadDecisionFinalized; // @synthesize isCoverUploadDecisionFinalized=_isCoverUploadDecisionFinalized;
- (void).cxx_destruct;
- (void)updateWithRenderedImageData:(id)arg1;
- (void)updateWithRenderedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)updateWithCustomCoverImageData:(id)arg1;
- (id)initWithUseRenderedFrame:(_Bool)arg1 useGenerateCoverFromRenderedVideo:(_Bool)arg2 delegate:(id)arg3;

@end

