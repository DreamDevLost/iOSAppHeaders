//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCoreTextLinkHandler.h"
#import "MKMapViewDelegate.h"

@class IGCoreTextView, IGLoginActivityAnnotationView, IGLoginActivityInfoModel, MKMapView, NSString, UIButton;

@interface IGLoginActivityMapView : UIView <MKMapViewDelegate, IGCoreTextLinkHandler>
{
    IGLoginActivityInfoModel *_viewModel;
    MKMapView *_mapView;
    IGLoginActivityAnnotationView *_annotationView;
    UIButton *_avowButton;
    UIButton *_disavowButton;
    UIView *_centerSeparator;
    IGCoreTextView *_confirmationTextView;
    id <IGLoginActivityMapViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGLoginActivityMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapOnDisavowButton;
- (void)_didTapOnAvowButton;
- (id)_configureConfirmationTextViewStyle:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

