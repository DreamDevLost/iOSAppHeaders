//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSString;

@interface IGProFBPageNameViewModel : NSObject <IGListDiffable>
{
    _Bool _isValid;
    _Bool _isLoading;
    NSString *_title;
    NSString *_pageName;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 pageName:(id)arg2 isValid:(_Bool)arg3;

@end

