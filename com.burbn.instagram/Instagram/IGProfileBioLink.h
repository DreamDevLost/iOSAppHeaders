//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGProfileBioLink : NSObject
{
    id _entity;
}

@property(readonly, nonatomic) id entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *entityName;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *linkID;
@property(readonly, nonatomic) long long type;
- (id)initWithEntity:(id)arg1;

@end

