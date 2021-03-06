//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGUser, NSArray, NSString;

@interface IGShoppingPDPMerchantSectionDataModel : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    _Bool _storyRingEnabled;
    NSString *_title;
    NSString *_subtitle;
    IGUser *_merchant;
    long long _density;
    long long _destination;
    NSArray *_supportedAccessories;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSArray *supportedAccessories; // @synthesize supportedAccessories=_supportedAccessories;
@property(readonly, nonatomic) _Bool storyRingEnabled; // @synthesize storyRingEnabled=_storyRingEnabled;
@property(readonly, nonatomic) long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) long long density; // @synthesize density=_density;
@property(readonly, copy, nonatomic) IGUser *merchant; // @synthesize merchant=_merchant;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 merchant:(id)arg3 density:(long long)arg4 destination:(long long)arg5 storyRingEnabled:(_Bool)arg6 supportedAccessories:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

