//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGCountdownStickerListModel : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    _Bool _moreAvailable;
    NSArray *_countdownModels;
    NSString *_maxID;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(readonly, copy, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(readonly, copy, nonatomic) NSArray *countdownModels; // @synthesize countdownModels=_countdownModels;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCountdownModels:(id)arg1 maxID:(id)arg2 moreAvailable:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

