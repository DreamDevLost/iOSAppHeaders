//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGQPEntity.h"

@class NSURL;

@interface IGQPImage : IGQPEntity
{
    _Bool _isAnimated;
    NSURL *_url;
    double _width;
    double _height;
    double _scale;
}

@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)parseParameters:(id)arg1;

@end
