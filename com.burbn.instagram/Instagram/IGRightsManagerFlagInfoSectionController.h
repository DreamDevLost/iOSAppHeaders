//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGRightsManagerFlagInfoCellDelegate.h"

@class IGRightsManagerFlagInfoCell, IGRightsManagerFlagInfoDetailModel;

@interface IGRightsManagerFlagInfoSectionController : IGListSectionController <IGRightsManagerFlagInfoCellDelegate>
{
    IGRightsManagerFlagInfoDetailModel *_rightsManagerFlagInfoDetailModel;
    IGRightsManagerFlagInfoCell *_sizingCell;
    id <IGRightsManagerFlagInfoSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGRightsManagerFlagInfoSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rightsManagerFlagInfoCellDidSelectLearnMoreButton:(id)arg1;
- (void)rightsManagerFlagInfoCellDidSelectDeleteButton:(id)arg1;
- (void)rightsManagerFlagInfoCellDidSelectSeeAllCountriesButton:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)init;

@end

