//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGTextWithEntities;

@interface IGAdManagerAdErrorStatusView : UIView
{
    _Bool _leftAlign;
    IGTextWithEntities *_errorStatus;
    id <IGCoreTextLinkHandler> _linkHandler;
    double _lateralMargin;
    IGCoreTextView *_errorStatusLabel;
}

@property(retain, nonatomic) IGCoreTextView *errorStatusLabel; // @synthesize errorStatusLabel=_errorStatusLabel;
@property(nonatomic) double lateralMargin; // @synthesize lateralMargin=_lateralMargin;
@property(nonatomic) _Bool leftAlign; // @synthesize leftAlign=_leftAlign;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler; // @synthesize linkHandler=_linkHandler;
@property(retain, nonatomic) IGTextWithEntities *errorStatus; // @synthesize errorStatus=_errorStatus;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_styledStringFromTextWithEntities:(id)arg1;
- (void)_setUpErrorStatusLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
