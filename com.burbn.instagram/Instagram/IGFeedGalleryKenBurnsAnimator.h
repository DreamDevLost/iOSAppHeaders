//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedGalleryKenBurnsImageDelegate.h"

@class CADisplayLink, IGFeedGalleryKenBurnsDataSource, IGFeedGalleryKenBurnsImage, NSString, PHImageManager;

@interface IGFeedGalleryKenBurnsAnimator : NSObject <IGFeedGalleryKenBurnsImageDelegate>
{
    IGFeedGalleryKenBurnsDataSource *_dataSource;
    PHImageManager *_imageManager;
    struct CGSize _targetImageSize;
    CADisplayLink *_displayLink;
    double _accumulatedAcitveTime;
    double _lastUnpauseTime;
    _Bool _paused;
    id <IGFeedGalleryKenBurnsAnimatorDelegate> _delegate;
    IGFeedGalleryKenBurnsImage *_currentImage;
    IGFeedGalleryKenBurnsImage *_appearingImage;
}

@property(readonly, nonatomic) IGFeedGalleryKenBurnsImage *appearingImage; // @synthesize appearingImage=_appearingImage;
@property(readonly, nonatomic) IGFeedGalleryKenBurnsImage *currentImage; // @synthesize currentImage=_currentImage;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <IGFeedGalleryKenBurnsAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)feedGalleryKenBurnsImageDidUpdateImage:(id)arg1;
- (void)feedGalleryKenBurnsImageDidFailLoading:(id)arg1;
- (void)feedGalleryKenBurnsImageDidLoad:(id)arg1;
- (void)_update;
- (double)_currentActiveTime;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 imageManager:(id)arg2 targetImageSize:(struct CGSize)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

