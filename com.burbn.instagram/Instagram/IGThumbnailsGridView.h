//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGMediaThumbnailViewDelegate.h"

@class NSArray, NSIndexSet, NSString;

@interface IGThumbnailsGridView : UIView <IGMediaThumbnailViewDelegate>
{
    _Bool _isRestricted;
    _Bool _showPlaceHolder;
    NSArray *_thumbnailViews;
    UIView *_thumbnailOverlayView;
    id <IGThumbnailsGridViewDelegate> _delegate;
    NSArray *_thumbnailURLs;
    NSIndexSet *_thumbnailVideoIndexes;
    unsigned long long _thumbnailCount;
    unsigned long long _thumbnailsPerRow;
    unsigned long long _thumbnailLoadedCount;
}

+ (struct CGSize)thumbnailSizeForWidth:(double)arg1 thumbnailsPerRow:(unsigned long long)arg2;
+ (double)thumbnailHeightForWidth:(double)arg1 thumbnailsPerRow:(unsigned long long)arg2;
+ (double)heightWithConstrainedWidth:(double)arg1 thumbnailCount:(unsigned long long)arg2 thumbnailsPerRow:(unsigned long long)arg3;
@property(nonatomic) unsigned long long thumbnailLoadedCount; // @synthesize thumbnailLoadedCount=_thumbnailLoadedCount;
@property(nonatomic) _Bool showPlaceHolder; // @synthesize showPlaceHolder=_showPlaceHolder;
@property(nonatomic) unsigned long long thumbnailsPerRow; // @synthesize thumbnailsPerRow=_thumbnailsPerRow;
@property(nonatomic) unsigned long long thumbnailCount; // @synthesize thumbnailCount=_thumbnailCount;
@property(retain, nonatomic) NSIndexSet *thumbnailVideoIndexes; // @synthesize thumbnailVideoIndexes=_thumbnailVideoIndexes;
@property(nonatomic) _Bool isRestricted; // @synthesize isRestricted=_isRestricted;
@property(copy, nonatomic) NSArray *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(nonatomic) __weak id <IGThumbnailsGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *thumbnailOverlayView; // @synthesize thumbnailOverlayView=_thumbnailOverlayView;
@property(retain, nonatomic) NSArray *thumbnailViews; // @synthesize thumbnailViews=_thumbnailViews;
- (void).cxx_destruct;
- (void)mediaThumbnailView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)mediaThumbnailView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)_prepareForThumbnailLoading;
- (void)_cancelThumbnailLoading;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_onTapThumbnail:(id)arg1;
- (void)layoutSubviews;
- (void)setThumbnailURLs:(id)arg1 isRestricted:(_Bool)arg2 thumbnailVideoIndexes:(id)arg3 maxThumbnails:(long long)arg4 thumbnailsPerRow:(unsigned long long)arg5 showPlaceHolder:(_Bool)arg6 module:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
