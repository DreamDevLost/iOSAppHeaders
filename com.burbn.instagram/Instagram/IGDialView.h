//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CAShapeLayer, IGCameraZoomController, IGDialTitleView, IGRadialCollectionViewLayout, NSString, UICollectionView, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, UITapGestureRecognizer;

@interface IGDialView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    IGCameraZoomController *_cameraZoomController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    IGRadialCollectionViewLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    IGDialTitleView *_titleView;
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_ellipseLayer;
    unsigned long long _state;
    long long _centerItemIndex;
    struct CGPoint _longPressOrigin;
    id <IGDialViewDataSource> _dataSource;
    id <IGDialViewSelectionDelegate> _selectionDelegate;
    id <IGDialViewCaptureDelegate> _captureDelegate;
    id <IGDialViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDialViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGDialViewCaptureDelegate> captureDelegate; // @synthesize captureDelegate=_captureDelegate;
@property(nonatomic) __weak id <IGDialViewSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(nonatomic) __weak id <IGDialViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_setPeripheralCellsHidden:(_Bool)arg1;
- (void)_updateTitleWithDataFromItemAtIndex:(long long)arg1;
- (void)_collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 animated:(_Bool)arg3 usingData:(id)arg4;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2 usingData:(id)arg3;
- (void)removeBadgeOnItemAtIndex:(long long)arg1;
@property(readonly) long long selectedItemIndex;
- (void)setCameraZoomController:(id)arg1;
- (void)setVideoRecordingProgress:(double)arg1;
- (void)reloadData;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_didTapTitleView:(id)arg1;
- (void)_handleVideoCaptureStop;
- (void)_handleVideoCaptureStart;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithBackgroundStyle:(long long)arg1 dataSource:(id)arg2 selectionDelegate:(id)arg3 captureDelegate:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

