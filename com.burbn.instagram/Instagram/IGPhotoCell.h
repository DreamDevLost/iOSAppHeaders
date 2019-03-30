//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFeedPhotoViewDelegate.h"
#import "IGZoomControllerLoadingDelegate.h"

@class IGFeedPhotoView, IGObjectRecyclingPotentialLogger, IGPostItem, IGUser, IGZoomController, NSString;

@interface IGPhotoCell : UICollectionViewCell <IGFeedPhotoViewDelegate, IGZoomControllerLoadingDelegate>
{
    IGObjectRecyclingPotentialLogger *_recyclingLogger;
    IGUser *_currentUser;
    IGFeedPhotoView *_photoView;
    IGPostItem *_post;
    id <IGPhotoCellDelegate> _delegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
    IGZoomController *_zoomController;
}

@property(retain, nonatomic) IGZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(nonatomic) __weak id <IGPhotoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak IGPostItem *post; // @synthesize post=_post;
@property(retain, nonatomic) IGFeedPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
- (void).cxx_destruct;
- (void)feedPhotoViewdidTapOverlayIndicator:(id)arg1;
- (void)feedPhotoViewDidFailLoad:(id)arg1 error:(id)arg2 networkRequestSummary:(id)arg3;
- (void)feedPhotoViewDidLoadPreviewImage:(id)arg1 progressiveJPEGScanNumber:(id)arg2;
- (void)feedPhotoView:(id)arg1 didShowTagsWithReason:(unsigned long long)arg2;
- (void)feedPhotoViewDidLoadImage:(id)arg1 loadSource:(id)arg2 networkRequestSummary:(id)arg3;
- (void)feedPhotoDidDoubleTapToLike:(id)arg1 locationInfo:(id)arg2;
- (void)feedPhotoViewDidTap:(id)arg1;
- (_Bool)isMediaViewLoaded;
- (void)setModule:(id)arg1;
- (void)configureTagOverlayAndIndicatorWithIndicatorConfiguration:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

