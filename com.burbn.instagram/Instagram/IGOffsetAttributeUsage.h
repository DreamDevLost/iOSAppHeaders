//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGOffsetAttributeUsage : NSObject
{
    unsigned long long _location;
    _Bool _normalized;
    unsigned long long _count;
    unsigned long long _type;
    unsigned long long _offset;
    unsigned long long _stride;
}

- (void)disable;
- (void)apply;
- (id)initWithAttribute:(id)arg1 count:(unsigned long long)arg2 type:(unsigned long long)arg3 stride:(unsigned long long)arg4 offset:(unsigned long long)arg5 normalized:(_Bool)arg6;

@end
