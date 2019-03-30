//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString;

@interface IGCollectionViewSectionDimmingController : NSObject <UIGestureRecognizerDelegate>
{
    double _dimmedAlpha;
    _Bool _dimmed;
    id <IGCollectionViewSectionDimmingControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGCollectionViewSectionDimmingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (void).cxx_destruct;
- (void)_handleTapGesture:(id)arg1;
- (void)_teardownDimmedTapHandlingForCell:(id)arg1;
- (void)_setupDimmedTapHandlingForCell:(id)arg1;
- (id)_tapGestureRecognizerForCell:(id)arg1;
- (void)handleDidEndDisplayingCell:(id)arg1;
- (void)handleCellWillDisplay:(id)arg1;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithDimmedAlpha:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

