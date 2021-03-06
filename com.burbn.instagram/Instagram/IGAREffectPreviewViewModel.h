//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGAREffectPreviewViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_effectName;
    NSString *_effectID;
    NSString *_effectIconURL;
    NSString *_effectThumbnailURL;
}

@property(readonly, copy, nonatomic) NSString *effectThumbnailURL; // @synthesize effectThumbnailURL=_effectThumbnailURL;
@property(readonly, copy, nonatomic) NSString *effectIconURL; // @synthesize effectIconURL=_effectIconURL;
@property(readonly, copy, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
@property(readonly, copy, nonatomic) NSString *effectName; // @synthesize effectName=_effectName;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithEffectName:(id)arg1 effectID:(id)arg2 effectIconURL:(id)arg3 effectThumbnailURL:(id)arg4;

@end

