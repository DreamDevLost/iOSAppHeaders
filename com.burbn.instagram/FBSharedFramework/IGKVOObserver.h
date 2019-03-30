//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGKVOObserver : NSObject
{
    id _object;
    NSString *_keypath;
}

@property(readonly, nonatomic) NSString *keypath; // @synthesize keypath=_keypath;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)observeOnMainWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)observeWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2 deliverOn:(id)arg3;
- (id)observeWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)observeOnMain:(CDUnknownBlockType)arg1;
- (id)observe:(CDUnknownBlockType)arg1 deliverOn:(id)arg2;
- (id)observe:(CDUnknownBlockType)arg1;
- (id)initWithObject:(id)arg1 keypath:(id)arg2;

@end

