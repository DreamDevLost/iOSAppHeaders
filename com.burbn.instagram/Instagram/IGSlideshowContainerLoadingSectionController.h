//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGSlideshowContainerLoadingCellDelegate.h"
#import "IGSlideshowContainerSectionControllerType.h"

@class NSString;

@interface IGSlideshowContainerLoadingSectionController : IGListSectionController <IGSlideshowContainerLoadingCellDelegate, IGSlideshowContainerSectionControllerType>
{
    id <IGSlideshowGestureHandler> _gestureHandler;
    _Bool _showCloseButton;
    id <IGSlideshowContainerLoadingSectionControllerDelegate> _loadingContainerSectionDelegate;
    id <IGSlideshowContainerSectionControllerDelegate> _itemContainerSectionDelegate;
    long long _itemIndex;
    long long _mediaIndex;
    double _pageWidth;
    id _object;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) double pageWidth; // @synthesize pageWidth=_pageWidth;
@property(nonatomic) long long mediaIndex; // @synthesize mediaIndex=_mediaIndex;
@property(nonatomic) long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property(nonatomic) __weak id <IGSlideshowContainerSectionControllerDelegate> itemContainerSectionDelegate; // @synthesize itemContainerSectionDelegate=_itemContainerSectionDelegate;
@property(nonatomic) __weak id <IGSlideshowContainerLoadingSectionControllerDelegate> loadingContainerSectionDelegate; // @synthesize loadingContainerSectionDelegate=_loadingContainerSectionDelegate;
- (void).cxx_destruct;
- (void)setFeedPreviewMode:(_Bool)arg1;
- (void)setOverviewMode:(_Bool)arg1;
- (void)setContainerSectionControllerDelegate:(id)arg1;
- (void)slideshowContainerLoadingCellReloadButtonTapped:(id)arg1;
- (void)slideshowContainerLoadingCellCloseButtonTapped:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)setCurrentNetworkState:(unsigned long long)arg1;
- (id)initWithGestureHandler:(id)arg1 showCloseButton:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

