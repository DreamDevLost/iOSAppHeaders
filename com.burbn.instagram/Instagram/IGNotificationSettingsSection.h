//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGNotificationSettingsSection : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_title;
    NSString *_footer;
    NSArray *_viewModels;
}

@property(readonly, copy, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(readonly, copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 footer:(id)arg2 viewModels:(id)arg3;

@end

