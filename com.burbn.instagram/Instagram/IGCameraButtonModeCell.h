//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer;

@interface IGCameraButtonModeCell : UICollectionViewCell
{
    _Bool _isRecording;
    long long _mode;
    CALayer *_imageLayer;
    CALayer *_frontLayer;
    CALayer *_backLayer;
}

- (void).cxx_destruct;
- (void)updateForTouchDownState:(_Bool)arg1;
- (void)updateForRecordingState:(_Bool)arg1;
- (void)configureWithMode:(long long)arg1 shutterImage:(id)arg2;
- (_Bool)_shouldShowStopRecording;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

