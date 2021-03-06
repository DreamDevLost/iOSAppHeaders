//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListCellController.h"

#import "IGStoryTraySectionHeaderCellDelegate.h"

@class IGStoryTraySectionHeaderCell, NSString;

@interface IGStoryTraySectionHeaderCellController : IGListCellController <IGStoryTraySectionHeaderCellDelegate>
{
    id <IGStoryTraySectionHeaderCellControllerDelegate> _delegate;
    double _percentCollapsed;
    id <IGStoryTraySectionContext> _storyTraySectionContext;
    IGStoryTraySectionHeaderCell *_headerCell;
}

+ (Class)collectionViewCellClass;
@property(nonatomic) __weak IGStoryTraySectionHeaderCell *headerCell; // @synthesize headerCell=_headerCell;
@property(readonly, nonatomic) __weak id <IGStoryTraySectionContext> storyTraySectionContext; // @synthesize storyTraySectionContext=_storyTraySectionContext;
@property(nonatomic) double percentCollapsed; // @synthesize percentCollapsed=_percentCollapsed;
@property(nonatomic) __weak id <IGStoryTraySectionHeaderCellControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)headerCellSecondaryActionButtonWasPressed:(id)arg1;
- (void)headerCellActionButtonWasPressed:(id)arg1;
- (struct CGSize)sizeForWidth:(double)arg1;
- (void)configureCell:(id)arg1;
- (id)initWithSectionContext:(id)arg1 storyTraySectionContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

