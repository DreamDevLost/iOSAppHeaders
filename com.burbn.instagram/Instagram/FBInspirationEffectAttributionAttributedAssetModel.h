//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface FBInspirationEffectAttributionAttributedAssetModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_title;
    NSString *_author;
    NSString *_assetURLString;
    NSString *_notes;
}

@property(readonly, copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(readonly, copy, nonatomic) NSString *assetURLString; // @synthesize assetURLString=_assetURLString;
@property(readonly, copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 author:(id)arg2 assetURLString:(id)arg3 notes:(id)arg4;

@end
