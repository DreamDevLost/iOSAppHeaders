//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGVideoComposition, IGVideoRenderOptions, NSString;

@interface IGMediaUploadTranscodeConfig : FBValueObject <NSCopying, NSCoding>
{
    IGVideoRenderOptions *_renderOptions;
    IGVideoComposition *_composition;
    NSString *_mediaID;
    NSString *_uploadID;
}

@property(readonly, copy, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, copy, nonatomic) IGVideoComposition *composition; // @synthesize composition=_composition;
@property(readonly, copy, nonatomic) IGVideoRenderOptions *renderOptions; // @synthesize renderOptions=_renderOptions;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRenderOptions:(id)arg1 composition:(id)arg2 mediaID:(id)arg3 uploadID:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end

