//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFeedPreviewableCell.h"
#import "IGMediaThumbnailViewDelegate.h"

@class CALayer, IGImageSpecifier, IGMediaThumbnailSelectionOverlay, IGMediaThumbnailView, IGSingleDoubleTapGestureRecognizer, NSData, NSString, UIColor, UIImage, UIView;

@interface IGMediaThumbnailCell : UICollectionViewCell <IGFeedPreviewableCell, IGMediaThumbnailViewDelegate>
{
    UIView *_annotationOverlay;
    CALayer *_highlightOverlay;
    IGSingleDoubleTapGestureRecognizer *_singleDoubleTapGestureRecognizer;
    _Bool _allowsSelection;
    _Bool _ig_selected;
    _Bool _supportsHighlighting;
    _Bool _supportDoubleTap;
    id <IGMediaThumbnailCellDelegate> _delegate;
    unsigned long long _glyph;
    UIImage *_image;
    IGImageSpecifier *_imageSpecifier;
    IGMediaThumbnailSelectionOverlay *_selectionOverlay;
    NSData *_previewImageData;
    IGMediaThumbnailView *_thumbnailView;
}

@property(readonly, nonatomic) IGMediaThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *annotationOverlay; // @synthesize annotationOverlay=_annotationOverlay;
@property(nonatomic) _Bool supportDoubleTap; // @synthesize supportDoubleTap=_supportDoubleTap;
@property(nonatomic) _Bool supportsHighlighting; // @synthesize supportsHighlighting=_supportsHighlighting;
@property(retain, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(readonly, nonatomic) IGMediaThumbnailSelectionOverlay *selectionOverlay; // @synthesize selectionOverlay=_selectionOverlay;
@property(copy, nonatomic) IGImageSpecifier *imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long glyph; // @synthesize glyph=_glyph;
@property(nonatomic) _Bool ig_selected; // @synthesize ig_selected=_ig_selected;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic) __weak id <IGMediaThumbnailCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mediaThumbnailView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)mediaThumbnailView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
@property(retain, nonatomic) UIColor *predominantMediaColor;
@property(nonatomic) unsigned long long mediaAccessibilityTraits;
@property(copy, nonatomic) NSString *mediaAccessibilityLabel;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureWithFeedItem:(id)arg1 index:(long long)arg2 imageSizeForGrid:(struct CGSize)arg3 supportedGlyphs:(unsigned long long)arg4 showHighlight:(_Bool)arg5 carouselIndex:(unsigned long long)arg6 useServerBestFitLogic:(_Bool)arg7 mediaThumbnailCellDelegate:(id)arg8 checkmarkPosition:(unsigned long long)arg9 module:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

