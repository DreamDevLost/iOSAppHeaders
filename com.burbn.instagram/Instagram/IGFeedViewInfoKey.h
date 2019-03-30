//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGFeedViewInfoKey : FBValueObject <NSCopying, NSCoding>
{
    NSString *_identifier;
    long long _viewInfoType;
}

@property(readonly, nonatomic) long long viewInfoType; // @synthesize viewInfoType=_viewInfoType;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 viewInfoType:(long long)arg2;

@end
