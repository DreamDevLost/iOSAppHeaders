//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGBezierPathElementEnumerationContext : NSObject
{
    _Bool _stop;
    CDUnknownBlockType _enumerationBlock;
}

+ (id)newWithEnumerationBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType enumerationBlock; // @synthesize enumerationBlock=_enumerationBlock;
- (void).cxx_destruct;

@end
