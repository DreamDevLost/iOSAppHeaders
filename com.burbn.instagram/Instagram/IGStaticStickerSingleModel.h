//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class IGHashtagModel, IGLocation, NSNumber, NSString, NSURL;

@interface IGStaticStickerSingleModel : FBValueObject <IGJSONCoding, NSSecureCoding, NSCopying, NSCoding>
{
    NSString *_pk;
    long long _type;
    NSURL *_imageURL;
    double _imageWidthRatio;
    double _imageWidth;
    double _imageHeight;
    NSString *_text;
    double _fontSize;
    NSString *_textColorString;
    NSString *_textBackgroundColorString;
    NSNumber *_textBackgroundAlpha;
    NSString *_titleText;
    double _titleFontSize;
    NSString *_titleColorString;
    double _xRatio;
    double _yRatio;
    IGLocation *_location;
    NSString *_attribution;
    IGHashtagModel *_hashtagModel;
    double _trayImageWidthRatio;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double trayImageWidthRatio; // @synthesize trayImageWidthRatio=_trayImageWidthRatio;
@property(readonly, copy, nonatomic) IGHashtagModel *hashtagModel; // @synthesize hashtagModel=_hashtagModel;
@property(readonly, copy, nonatomic) NSString *attribution; // @synthesize attribution=_attribution;
@property(readonly, copy, nonatomic) IGLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) double yRatio; // @synthesize yRatio=_yRatio;
@property(readonly, nonatomic) double xRatio; // @synthesize xRatio=_xRatio;
@property(readonly, copy, nonatomic) NSString *titleColorString; // @synthesize titleColorString=_titleColorString;
@property(readonly, nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, copy, nonatomic) NSNumber *textBackgroundAlpha; // @synthesize textBackgroundAlpha=_textBackgroundAlpha;
@property(readonly, copy, nonatomic) NSString *textBackgroundColorString; // @synthesize textBackgroundColorString=_textBackgroundColorString;
@property(readonly, copy, nonatomic) NSString *textColorString; // @synthesize textColorString=_textColorString;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(readonly, nonatomic) double imageWidthRatio; // @synthesize imageWidthRatio=_imageWidthRatio;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPk:(id)arg1 type:(long long)arg2 imageURL:(id)arg3 imageWidthRatio:(double)arg4 imageWidth:(double)arg5 imageHeight:(double)arg6 text:(id)arg7 fontSize:(double)arg8 textColorString:(id)arg9 textBackgroundColorString:(id)arg10 textBackgroundAlpha:(id)arg11 titleText:(id)arg12 titleFontSize:(double)arg13 titleColorString:(id)arg14 xRatio:(double)arg15 yRatio:(double)arg16 location:(id)arg17 attribution:(id)arg18 hashtagModel:(id)arg19 trayImageWidthRatio:(double)arg20;
- (id)initWithCoder:(id)arg1;
- (id)titleColor;
- (id)textColor;
- (id)textBackgroundColor;
- (double)aspectRatio;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
