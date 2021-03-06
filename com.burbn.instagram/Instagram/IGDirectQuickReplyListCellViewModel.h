//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectQuickReply;

@interface IGDirectQuickReplyListCellViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _isEditable;
    IGDirectQuickReply *_quickReply;
}

@property(readonly, nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(readonly, copy, nonatomic) IGDirectQuickReply *quickReply; // @synthesize quickReply=_quickReply;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithQuickReply:(id)arg1 isEditable:(_Bool)arg2;

@end

