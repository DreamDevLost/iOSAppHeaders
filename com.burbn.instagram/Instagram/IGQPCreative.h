//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGQPEntity.h"

@class IGQPAction, IGQPImage, NSArray, NSString;

@interface IGQPCreative : IGQPEntity
{
    NSString *_title;
    NSString *_content;
    NSString *_footer;
    IGQPImage *_image;
    IGQPAction *_primaryAction;
    IGQPAction *_secondaryAction;
    IGQPAction *_dismissAction;
    NSString *_socialContextText;
    NSArray *_socialContextImages;
}

@property(copy, nonatomic) NSArray *socialContextImages; // @synthesize socialContextImages=_socialContextImages;
@property(copy, nonatomic) NSString *socialContextText; // @synthesize socialContextText=_socialContextText;
@property(retain, nonatomic) IGQPAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain, nonatomic) IGQPAction *secondaryAction; // @synthesize secondaryAction=_secondaryAction;
@property(retain, nonatomic) IGQPAction *primaryAction; // @synthesize primaryAction=_primaryAction;
@property(retain, nonatomic) IGQPImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)parseParameters:(id)arg1;

@end

