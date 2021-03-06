//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGSmartStickerModelType.h"
#import "IGStickerModelType.h"
#import "NSCoding.h"

@class NSString;

@interface IGFundraiserStickerTrayModel : NSObject <IGListDiffable, IGStickerModelType, IGSmartStickerModelType, NSCoding>
{
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)smartStickerType;
@property(readonly, nonatomic) _Bool includeInRecent;
@property(readonly, copy, nonatomic) NSString *pk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

