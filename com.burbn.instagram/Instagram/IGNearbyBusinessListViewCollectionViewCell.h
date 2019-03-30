//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGNearbyBusinessProfileDigestViewDelegate.h"

@class IGNearbyBusinessProfileDigestView, NSString;

@interface IGNearbyBusinessListViewCollectionViewCell : UICollectionViewCell <IGNearbyBusinessProfileDigestViewDelegate>
{
    IGNearbyBusinessProfileDigestView *_digestView;
    _Bool _ignoreActionButtons;
    id <IGNearbyBusinessListViewCollectionViewCellDelegate> _delegate;
}

+ (double)contentHeightForWidth:(double)arg1;
@property(nonatomic) _Bool ignoreActionButtons; // @synthesize ignoreActionButtons=_ignoreActionButtons;
@property(nonatomic) __weak id <IGNearbyBusinessListViewCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)businessProfileDigestView:(id)arg1 didTapRightCTAButtonWithAnnotation:(id)arg2;
- (void)businessProfileDigestView:(id)arg1 didTapLeftCTAButtonWithAnotation:(id)arg2;
- (void)businessProfileDigestView:(id)arg1 didTapThumbnailAtIndex:(unsigned long long)arg2 forAnnotation:(id)arg3;
- (void)businessProfileDigestView:(id)arg1 didTapProfileWithAnnotation:(id)arg2;
- (void)businessProfileDigestView:(id)arg1 didTapWithAnnotation:(id)arg2;
- (void)configureWithAnnotation:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

