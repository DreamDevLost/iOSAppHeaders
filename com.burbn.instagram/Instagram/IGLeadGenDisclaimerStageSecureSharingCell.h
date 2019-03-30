//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGLeadGenCollectionViewDynamicSizingCell.h"

@class NSString, UITextView, UIView;

@interface IGLeadGenDisclaimerStageSecureSharingCell : UICollectionViewCell <IGLeadGenCollectionViewDynamicSizingCell>
{
    UITextView *_secureSharingView;
    UIView *_hairline;
    id <IGLeadGenDisclaimerStageSecureSharingCellDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <IGLeadGenDisclaimerStageSecureSharingCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapSecureSharingView:(id)arg1;
- (struct CGSize)_getSecureSharingTextSizeWithConstrainingSize:(struct CGSize)arg1;
- (struct CGSize)dynamicSizeWithConstrainingSize:(struct CGSize)arg1;
- (void)configureWithModel:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

