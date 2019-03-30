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

@class IGFeedItemInsertionAction, NSArray, NSNumber, NSString;

@interface IGTileUnit : NSObject <IGListDiffable, IGMainFeedItemIdProviding, NSCoding, IGFeedItemInsertionActionProvider>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_feedItems;
    long long _style;
    NSString *_typeString;
    long long _type;
    IGFeedItemInsertionAction *_feedItemInsertionAction;
    NSNumber *_columns;
    NSNumber *_rows;
}

@property(retain, nonatomic) NSNumber *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) NSNumber *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) IGFeedItemInsertionAction *feedItemInsertionAction; // @synthesize feedItemInsertionAction=_feedItemInsertionAction;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)mainFeedItemType;
- (id)itemId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 typeString:(id)arg4 type:(long long)arg5 feedItems:(id)arg6 style:(long long)arg7 feedItemInsertionAction:(id)arg8 columns:(id)arg9 rows:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

