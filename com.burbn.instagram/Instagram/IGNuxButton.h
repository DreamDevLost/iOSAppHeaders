//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTapButton.h"

@class NSString;

@interface IGNuxButton : IGTapButton
{
    _Bool _expanded;
    double _size;
    double _maxWidth;
    double _imageInset;
    double _titleInset;
    NSString *_title;
}

+ (id)buttonWithSize:(double)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double titleInset; // @synthesize titleInset=_titleInset;
@property(nonatomic) double imageInset; // @synthesize imageInset=_imageInset;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isExpanded;
- (void)sizeToFit;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateInsets;
- (void)shrinkToIconWithAnimation:(_Bool)arg1 duration:(double)arg2 delay:(double)arg3 additionalAnimations:(CDUnknownBlockType)arg4;
- (void)shrinkToIconWithAnimation:(_Bool)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)showTextLabelWithAnimation:(_Bool)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)removeAllAnimations;
- (id)_initWithSize:(double)arg1;

@end
