//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary;

@interface IGQPSlotsConfig : FBValueObject <NSCopying, NSCoding>
{
    NSDictionary *_config;
}

@property(readonly, copy, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1;

@end

