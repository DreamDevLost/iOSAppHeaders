//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray, NSString;

@interface IGActivatorMegaphoneDataModel : NSObject <IGListDiffable>
{
    _Bool _dismissible;
    _Bool _isSingleActivator;
    NSString *_title;
    NSString *_uuid;
    NSArray *_activatorsArray;
}

@property(readonly, nonatomic) _Bool isSingleActivator; // @synthesize isSingleActivator=_isSingleActivator;
@property(readonly, nonatomic) NSArray *activatorsArray; // @synthesize activatorsArray=_activatorsArray;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) _Bool dismissible; // @synthesize dismissible=_dismissible;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 dismissible:(_Bool)arg3 activatorsArray:(id)arg4;

@end
