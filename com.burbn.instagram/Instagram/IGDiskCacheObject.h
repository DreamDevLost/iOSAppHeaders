//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface IGDiskCacheObject : NSObject <NSCoding>
{
    unsigned long long _cost;
    id <NSCoding> _object;
}

@property(retain, nonatomic) id <NSCoding> object; // @synthesize object=_object;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
