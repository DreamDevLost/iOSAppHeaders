//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGShoppingPDPModuleHeaderAction, NSString;

@interface IGShoppingPDPModuleHeaderViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_identifier;
    NSString *_title;
    IGShoppingPDPModuleHeaderAction *_action;
}

@property(readonly, copy, nonatomic) IGShoppingPDPModuleHeaderAction *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 action:(id)arg3;

@end

