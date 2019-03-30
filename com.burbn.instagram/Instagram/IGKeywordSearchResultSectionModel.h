//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGKeywordSearchResultSectionModel : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_items;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 title:(id)arg2;

@end

