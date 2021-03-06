//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGCoreTextLinkHandler.h"
#import "IGListBindable.h"

@class CALayer, IGCoreTextView, NSString;

@interface IGExploreSingleTopicFeedMuteHeaderCollectionViewCell : UICollectionViewCell <IGCoreTextLinkHandler, IGListBindable>
{
    CALayer *_topSeparatorLayer;
    CALayer *_bottomSeparatorLayer;
    IGCoreTextView *_textView;
    id <IGExploreSingleTopicFeedMuteHeaderCollectionViewCellDelegate> _delegate;
}

+ (double)preferredHeightWithViewModel:(id)arg1 constrainedToWidth:(double)arg2;
@property(nonatomic) __weak id <IGExploreSingleTopicFeedMuteHeaderCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)layoutSubviews;
- (void)bindViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

