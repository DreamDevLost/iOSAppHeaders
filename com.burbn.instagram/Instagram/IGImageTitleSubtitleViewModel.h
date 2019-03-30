//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGImageTitleSubtitleViewImageSource, IGImageTitleSubtitleViewLayoutSpec, NSAttributedString, NSString, UIColor;

@interface IGImageTitleSubtitleViewModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _shouldTruncateSubtitle;
    _Bool _shouldShowRingOutlineAroundImage;
    NSAttributedString *_title;
    NSString *_subtitle;
    UIColor *_subtitleColor;
    IGImageTitleSubtitleViewImageSource *_imageSource;
    IGImageTitleSubtitleViewLayoutSpec *_layoutSpec;
}

@property(readonly, copy, nonatomic) IGImageTitleSubtitleViewLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, copy, nonatomic) IGImageTitleSubtitleViewImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(readonly, nonatomic) _Bool shouldShowRingOutlineAroundImage; // @synthesize shouldShowRingOutlineAroundImage=_shouldShowRingOutlineAroundImage;
@property(readonly, nonatomic) _Bool shouldTruncateSubtitle; // @synthesize shouldTruncateSubtitle=_shouldTruncateSubtitle;
@property(readonly, copy, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 subtitleColor:(id)arg3 shouldTruncateSubtitle:(_Bool)arg4 shouldShowRingOutlineAroundImage:(_Bool)arg5 imageSource:(id)arg6 layoutSpec:(id)arg7;

@end

