//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIColor;

@interface IGSimpleReelPreviewViewModel : NSObject
{
    _Bool _isSponsored;
    id <IGReelOwnerType> _owner;
    NSURL *_imageURL;
    UIColor *_topBackgroundColor;
    UIColor *_bottomBackgroundColor;
    NSString *_module;
    struct CGSize _size;
}

@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) UIColor *bottomBackgroundColor; // @synthesize bottomBackgroundColor=_bottomBackgroundColor;
@property(readonly, nonatomic) UIColor *topBackgroundColor; // @synthesize topBackgroundColor=_topBackgroundColor;
@property(readonly, nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) id <IGReelOwnerType> owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (id)initWithOwner:(id)arg1 isSponsored:(_Bool)arg2 ImageURL:(id)arg3 size:(struct CGSize)arg4 topBackgroundColor:(id)arg5 bottomBackgroundColor:(id)arg6 module:(id)arg7;

@end
