//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGFeedStatusView;

@interface IGFeedStatusSectionController : IGListSectionController
{
    IGFeedStatusView *_statusView;
    double _heightOffset;
    _Bool _showBlankFeedStatusView;
    long long _type;
}

@property(nonatomic) _Bool showBlankFeedStatusView; // @synthesize showBlankFeedStatusView=_showBlankFeedStatusView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)_invalidateLayoutIfAppropriate;
- (void)setHeightOffset:(double)arg1;
- (void)updateFeedStatusView;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFeedStatusView:(id)arg1;

@end

