//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGMainFeedItemIdProviding.h"
#import "NSCoding.h"

@class IGRequestParameter, NSString, NSURL;

@interface IGFeedItemGroupHeaderModel : NSObject <IGListDiffable, IGMainFeedItemIdProviding, NSCoding>
{
    _Bool _isDismissable;
    _Bool _floating;
    NSString *_title;
    NSString *_identifier;
    NSString *_aboutPromptText;
    NSURL *_aboutPageURL;
    IGRequestParameter *_requestParameter;
}

@property(retain, nonatomic) IGRequestParameter *requestParameter; // @synthesize requestParameter=_requestParameter;
@property(readonly, nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(readonly, nonatomic) _Bool isDismissable; // @synthesize isDismissable=_isDismissable;
@property(readonly, copy, nonatomic) NSURL *aboutPageURL; // @synthesize aboutPageURL=_aboutPageURL;
@property(readonly, copy, nonatomic) NSString *aboutPromptText; // @synthesize aboutPromptText=_aboutPromptText;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (unsigned long long)mainFeedItemType;
- (id)itemId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 aboutPromptText:(id)arg3 aboutPageURL:(id)arg4 isDismissable:(_Bool)arg5 isFloating:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

