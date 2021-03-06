//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGCanvasComponentViewability.h"
#import "IGCanvasProductCellDelegate.h"
#import "IGListDisplayDelegate.h"

@class IGCanvasActionHelper, IGCanvasLoggingContext, IGCanvasProductListViewModel, NSMutableDictionary, NSString, UIColor;

@interface IGCanvasProductListSectionController : IGListSectionController <IGCanvasProductCellDelegate, IGListDisplayDelegate, IGCanvasComponentViewability>
{
    IGCanvasProductListViewModel *_productListViewModel;
    IGCanvasLoggingContext *_loggingContext;
    IGCanvasActionHelper *_actionHelper;
    NSMutableDictionary *_productElementLoggers;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
- (id)_loggerAtIndex:(long long)arg1;
- (double)componentViewabilityNumberOfBlocksSeen:(double)arg1;
- (double)componentViewabilityNumberOfTotalBlocks;
- (void)canvasProductCellDidTapProduct:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithActionHelper:(id)arg1 loggingContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

