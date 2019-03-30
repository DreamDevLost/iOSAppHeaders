//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGCoreTextLinkHandler.h"

@class IGCoreTextView, NSString;

@interface IGNetegoSurveyLearnMoreMessageCell : UICollectionViewCell <IGCoreTextLinkHandler>
{
    IGCoreTextView *_messageTextView;
    id <IGNetegoSurveyLearnMoreMessageCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)configureCellWithURLString:(id)arg1 disclaimerContent:(id)arg2 showLearnMore:(_Bool)arg3 delegate:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
