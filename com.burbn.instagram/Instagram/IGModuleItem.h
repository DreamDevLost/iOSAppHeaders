//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGModuleItemPosition, NSSet;

@interface IGModuleItem : NSObject
{
    id <IGResource> _resource;
    IGModuleItemPosition *_position;
    NSSet *_attributes;
}

@property(readonly, nonatomic) NSSet *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) IGModuleItemPosition *position; // @synthesize position=_position;
@property(readonly, nonatomic) id <IGResource> resource; // @synthesize resource=_resource;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResource:(id)arg1 position:(id)arg2 attributes:(id)arg3;
- (id)initWithResource:(id)arg1 position:(id)arg2;

@end

