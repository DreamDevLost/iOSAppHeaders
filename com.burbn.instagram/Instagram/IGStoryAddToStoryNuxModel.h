//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGStoryAddToStoryNuxModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_text;
    NSString *_analyticsTag;
}

@property(readonly, copy, nonatomic) NSString *analyticsTag; // @synthesize analyticsTag=_analyticsTag;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 analyticsTag:(id)arg2;

@end

