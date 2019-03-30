//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGDirectAnimatedMediaSectionControllerProtocol.h"
#import "IGListDisplayDelegate.h"

@class IGDirectAnimatedMediaLogger, IGDirectAnimatedMediaViewModel, NSString;

@interface IGDirectAnimatedMediaSectionController : IGListSectionController <IGListDisplayDelegate, IGDirectAnimatedMediaSectionControllerProtocol>
{
    IGDirectAnimatedMediaViewModel *_model;
    IGDirectAnimatedMediaLogger *_logger;
    id <IGDirectAnimatedMediaSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectAnimatedMediaSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

