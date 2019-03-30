//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaOverlayIndicator;

@interface IGPageCellIndicatorController : NSObject
{
    _Bool _hasShownNUX;
    id <IGPageCellIndicatorControllerDelegate> _delegate;
    IGMediaOverlayIndicator *_indicatorView;
}

@property(nonatomic) _Bool hasShownNUX; // @synthesize hasShownNUX=_hasShownNUX;
@property(readonly, nonatomic) __weak IGMediaOverlayIndicator *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak id <IGPageCellIndicatorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showPhotoIndicatorForFeedItem:(id)arg1 pageCellState:(id)arg2 animated:(_Bool)arg3;
- (void)_showVideoIndicatorForVideoView:(id)arg1 animated:(_Bool)arg2;
- (void)_showIndicatorWithVideoView:(id)arg1 feedItem:(id)arg2 pageCellState:(id)arg3 animated:(_Bool)arg4;
- (void)_hideIndicatorWithVideoView:(id)arg1;
- (void)_showIndicatorWithContext:(id)arg1;
- (void)willDisplayOverlay;
- (void)didStartScrollingWithVideoView:(id)arg1;
- (void)didScrollToPageWithVideoView:(id)arg1 feedItem:(id)arg2 pageCellState:(id)arg3;
- (void)didAppearOnScreenWithVideoView:(id)arg1 feedItem:(id)arg2 pageCellState:(id)arg3 percentVisible:(double)arg4;
- (void)reset;
- (id)initWithIndicatorView:(id)arg1;
- (void)dealloc;

@end
