//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSURL;

@interface IGImageMetadata : FBValueObject <NSCopying, NSCoding>
{
    _Bool _decodedOnRequest;
    NSURL *_requestURL;
    double _width;
    double _height;
    unsigned long long _imageLoadSource;
    NSString *_module;
}

@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) unsigned long long imageLoadSource; // @synthesize imageLoadSource=_imageLoadSource;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
@property(readonly, nonatomic) _Bool decodedOnRequest; // @synthesize decodedOnRequest=_decodedOnRequest;
@property(readonly, copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRequestURL:(id)arg1 decodedOnRequest:(_Bool)arg2 width:(double)arg3 height:(double)arg4 imageLoadSource:(unsigned long long)arg5 module:(id)arg6;
- (id)initWithCoder:(id)arg1;

@end

