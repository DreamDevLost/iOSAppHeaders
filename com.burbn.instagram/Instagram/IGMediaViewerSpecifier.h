//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGPhoto, IGVideo;

@interface IGMediaViewerSpecifier : FBValueObject <NSCopying, NSCoding>
{
    IGPhoto *_photo;
    IGVideo *_video;
}

@property(readonly, copy, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(readonly, copy, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (id)initWithPhoto:(id)arg1 video:(id)arg2;

@end

