//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedItemInsertionActionProvider.h"
#import "IGListDiffable.h"
#import "IGMainFeedItemIdProviding.h"
#import "NSCoding.h"

@class IGFeedItemInsertionAction, NSString;

@interface IGShowMoreModel : NSObject <IGListDiffable, IGMainFeedItemIdProviding, NSCoding, IGFeedItemInsertionActionProvider>
{
    NSString *_identifier;
    IGFeedItemInsertionAction *_feedItemInsertionAction;
}

@property(readonly, nonatomic) IGFeedItemInsertionAction *feedItemInsertionAction; // @synthesize feedItemInsertionAction=_feedItemInsertionAction;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)mainFeedItemType;
- (id)itemId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 feedItemInsertionAction:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

