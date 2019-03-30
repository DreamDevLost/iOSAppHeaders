//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGReportAttachmentViewCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UITextViewDelegate.h"

@class IGCrashTaskDetailsModel, IGTextView, NSMutableArray, NSString, UIButton, UICollectionView, UILabel;

@interface IGReportPopoverView : UIView <UITextViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGReportAttachmentViewCellDelegate>
{
    UILabel *_titleLabel;
    UIButton *_updateButton;
    IGTextView *_bugReportTextView;
    NSString *_placeholderText;
    id <IGReportPopoverViewDelegate> _delegate;
    IGCrashTaskDetailsModel *_crashTaskModel;
    UICollectionView *_attachmentCollectionView;
    NSMutableArray *_imageAttachments;
    UIView *_screenshotButton;
    UIView *_cameraRollButton;
    UIView *_recordingButton;
}

- (void).cxx_destruct;
- (void)onDeleteButtonForCell:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)_onRecordVideo:(id)arg1;
- (void)_onCameraRollButton:(id)arg1;
- (void)_onScreenshotButton:(id)arg1;
- (void)_onUpdateButton;
- (void)_onTitleLabelTap:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (id)reportDescription;
- (void)reloadWithImageAttachments:(id)arg1;
- (void)layoutSubviews;
- (void)hideCameraRoll;
- (id)initWithCrashTaskDetailModel:(id)arg1 bugReportType:(long long)arg2 withDelegate:(id)arg3 displayUpdateButton:(_Bool)arg4 displayCameraRoll:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

