//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedItemVideoCell.h"

#import "IGFeedPreviewableCell.h"

@class IGChannelModel, IGDiscoveryMediaModel, NSString, UIView<IGDiscoveryDestinationOverlayView>;

@interface IGDiscoveryVideoCell : IGFeedItemVideoCell <IGFeedPreviewableCell>
{
    IGDiscoveryMediaModel *_discoveryMediaModel;
    UIView<IGDiscoveryDestinationOverlayView> *_overlayView;
    _Bool _autoplayEnabled;
    IGChannelModel *_channel;
}

@property(readonly, nonatomic) IGChannelModel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (id)image;
- (void)_setupOverlayViewForDestination:(_Bool)arg1 header:(id)arg2 title:(id)arg3 subtitle:(id)arg4 accessoryType:(long long)arg5 alignmentStyle:(long long)arg6;
- (void)_configureWithFeedItem:(id)arg1 userSession:(id)arg2 loggingProvider:(id)arg3 playerDelegate:(id)arg4;
- (void)configureWithChannel:(id)arg1 autoplayEnabled:(_Bool)arg2 userSession:(id)arg3 hidePlayIconIfAppropriate:(_Bool)arg4 loggingProvider:(id)arg5 playerDelegate:(id)arg6 alignmentStyle:(long long)arg7 destinationCoverOverride:(_Bool)arg8 removeVideoOverlay:(_Bool)arg9;
- (void)configureWithDiscoveryMediaModel:(id)arg1 autoplayEnabled:(_Bool)arg2 userSession:(id)arg3 hidePlayIconIfAppropriate:(_Bool)arg4 loggingProvider:(id)arg5 playerDelegate:(id)arg6 destinationCoverOverride:(_Bool)arg7;
- (void)prepareForReuse;
- (void)handleDidPause;
- (void)handleDidBeginPlaying;
- (void)_configureVideoView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

