//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectMessageCell.h"

#import "IGHeartAnimatable.h"

@class IGDirectReshareMessageContainerView, NSString;

@interface IGDirectHashtagMessageCell : IGDirectMessageCell <IGHeartAnimatable>
{
    struct CGSize _hashtagContentSize;
    IGDirectReshareMessageContainerView *_reshareContainerView;
}

@property(readonly, nonatomic) IGDirectReshareMessageContainerView *reshareContainerView; // @synthesize reshareContainerView=_reshareContainerView;
- (void).cxx_destruct;
- (id)contentViewForHeartAnimation;
- (struct CGSize)messageContentSize;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
