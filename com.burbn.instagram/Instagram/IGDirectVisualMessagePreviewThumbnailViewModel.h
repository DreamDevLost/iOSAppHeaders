//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectVisualMessagePreviewThumbnailSpecifier;

@interface IGDirectVisualMessagePreviewThumbnailViewModel : FBValueObject <NSCopying, NSCoding>
{
    IGDirectVisualMessagePreviewThumbnailSpecifier *_specifier;
}

@property(readonly, copy, nonatomic) IGDirectVisualMessagePreviewThumbnailSpecifier *specifier; // @synthesize specifier=_specifier;
- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;

@end

