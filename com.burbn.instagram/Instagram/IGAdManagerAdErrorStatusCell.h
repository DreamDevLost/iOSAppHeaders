//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableViewCell.h"

@class IGAdManagerAdErrorStatusView, IGTextWithEntities;

@interface IGAdManagerAdErrorStatusCell : IGTableViewCell
{
    IGAdManagerAdErrorStatusView *_statusView;
    IGTextWithEntities *_errorStatus;
    id <IGCoreTextLinkHandler> _linkHandler;
}

@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler; // @synthesize linkHandler=_linkHandler;
@property(retain, nonatomic) IGTextWithEntities *errorStatus; // @synthesize errorStatus=_errorStatus;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end
