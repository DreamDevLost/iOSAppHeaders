//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGSimpleReelPreviewViewDelegate.h"

@class IGSimpleReelPreviewView;

@interface IGGenericSurveyReelPreviewCell : UICollectionViewCell <IGSimpleReelPreviewViewDelegate>
{
    IGSimpleReelPreviewView *_surveyReelPreviewView;
    id <IGGenericSurveyReelPreviewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGGenericSurveyReelPreviewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)simpleReelPreviewViewDidTapSurveyReelPreviewView:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

