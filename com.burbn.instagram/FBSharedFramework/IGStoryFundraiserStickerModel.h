//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGJSONCoding.h"
#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGStoryFundraiserStickerConsumptionSheetModel, IGUser, NSString;

@interface IGStoryFundraiserStickerModel : FBValueObject <IGJSONCoding, IGListDiffable, NSCopying, NSCoding>
{
    NSString *_pk;
    NSString *_title;
    NSString *_titleColor;
    NSString *_subtitleColor;
    NSString *_startBackgroundColor;
    NSString *_endBackgroundColor;
    NSString *_buttonTextColor;
    IGUser *_user;
    IGStoryFundraiserStickerConsumptionSheetModel *_consumptionSheetModel;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) IGStoryFundraiserStickerConsumptionSheetModel *consumptionSheetModel; // @synthesize consumptionSheetModel=_consumptionSheetModel;
@property(readonly, copy, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSString *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(readonly, copy, nonatomic) NSString *endBackgroundColor; // @synthesize endBackgroundColor=_endBackgroundColor;
@property(readonly, copy, nonatomic) NSString *startBackgroundColor; // @synthesize startBackgroundColor=_startBackgroundColor;
@property(readonly, copy, nonatomic) NSString *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(readonly, copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 title:(id)arg2 titleColor:(id)arg3 subtitleColor:(id)arg4 startBackgroundColor:(id)arg5 endBackgroundColor:(id)arg6 buttonTextColor:(id)arg7 user:(id)arg8 consumptionSheetModel:(id)arg9;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
