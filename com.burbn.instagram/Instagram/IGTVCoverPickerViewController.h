//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGTVCoverPickerThumbnailGenerationTaskDelgate.h"
#import "IGTVZoomPresentationProgress.h"

@class IGTVCoverPickerThumbnailGenerationTask, IGTVCoverPickerView, IGVideoComposition, NSString;

@interface IGTVCoverPickerViewController : IGViewController <IGTVCoverPickerThumbnailGenerationTaskDelgate, IGTVZoomPresentationProgress>
{
    IGVideoComposition *_videoComposition;
    IGTVCoverPickerView *_coverPickerView;
    long long _numberOfThumbnails;
    IGTVCoverPickerThumbnailGenerationTask *_thumbnailGenerationTask;
    double _presentationProgress;
    id <IGTVCoverPickerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTVCoverPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
- (void).cxx_destruct;
- (void)_scrubberChanged;
- (void)_doneTapped;
- (void)_cancelTapped;
- (id)analyticsModule;
- (_Bool)prefersNavigationBarHidden;
- (void)thumbnailGenerationTask:(id)arg1 didGenerateThumbnails:(id)arg2;
- (void)_generateThumbnailsIfNeeded;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

