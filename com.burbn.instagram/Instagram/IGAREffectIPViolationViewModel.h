//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGAREffectIPViolationViewModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_effectID;
    NSString *_detailText;
    NSString *_helpURLString;
}

@property(readonly, copy, nonatomic) NSString *helpURLString; // @synthesize helpURLString=_helpURLString;
@property(readonly, copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
- (void).cxx_destruct;
- (id)initWithEffectID:(id)arg1 detailText:(id)arg2 helpURLString:(id)arg3;

@end

