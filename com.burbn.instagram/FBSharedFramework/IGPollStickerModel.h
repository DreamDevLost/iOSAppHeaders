//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGJSONCoding.h"
#import "IGListDiffable.h"
#import "IGSmartStickerModelType.h"
#import "IGStickerModelType.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSNumber, NSString;

@interface IGPollStickerModel : FBValueObject <IGStickerModelType, IGSmartStickerModelType, IGJSONCoding, IGListDiffable, NSCopying, NSCoding>
{
    _Bool _viewerCanVote;
    _Bool _isSharedResult;
    NSString *_pk;
    NSString *_question;
    NSArray *_options;
    NSNumber *_viewerVote;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)defaultPollStickerModelWithPk:(id)arg1 question:(id)arg2;
+ (id)pollStickerModelWithDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool isSharedResult; // @synthesize isSharedResult=_isSharedResult;
@property(readonly, nonatomic) _Bool viewerCanVote; // @synthesize viewerCanVote=_viewerCanVote;
@property(readonly, copy, nonatomic) NSNumber *viewerVote; // @synthesize viewerVote=_viewerVote;
@property(readonly, copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *question; // @synthesize question=_question;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 question:(id)arg2 options:(id)arg3 viewerVote:(id)arg4 viewerCanVote:(_Bool)arg5 isSharedResult:(_Bool)arg6;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)smartStickerType;
@property(readonly, nonatomic) _Bool includeInRecent;
- (unsigned long long)totalVoteCount;
- (double)percentageOfLeftCount;
- (id)copyWithVoteIndex:(unsigned long long)arg1 isApplyingVote:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
