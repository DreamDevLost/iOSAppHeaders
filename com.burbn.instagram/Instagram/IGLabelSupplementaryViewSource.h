//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListSupplementaryViewSource.h"

@class IGLabelItemConfiguration, IGListSectionController, NSString;

@interface IGLabelSupplementaryViewSource : NSObject <IGListSupplementaryViewSource>
{
    NSString *_labelTitle;
    IGLabelItemConfiguration *_config;
    IGListSectionController *_sectionController;
    id <IGListCollectionContext> _collectionContext;
}

@property(readonly, nonatomic) __weak id <IGListCollectionContext> collectionContext; // @synthesize collectionContext=_collectionContext;
@property(readonly, nonatomic) __weak IGListSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(retain, nonatomic) IGLabelItemConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
- (double)_heightForLabelItemCellWithConstraintWidth:(double)arg1;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (id)initWithSectionController:(id)arg1 collectionContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

