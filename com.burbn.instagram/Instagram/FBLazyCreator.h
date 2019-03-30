//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBLazyCreator : NSObject
{
    id _target;
    _Bool _enforcing;
    _Bool _automatic;
    CDUnknownBlockType _creatorBlock;
}

+ (id)automaticCreatorWithBlock:(CDUnknownBlockType)arg1;
+ (id)manualCreatorWithBlock:(CDUnknownBlockType)arg1;
@property _Bool automatic; // @synthesize automatic=_automatic;
@property _Bool enforcing; // @synthesize enforcing=_enforcing;
@property(readonly, copy, nonatomic) CDUnknownBlockType creatorBlock; // @synthesize creatorBlock=_creatorBlock;
@property(readonly) _Bool created;
@property(readonly) id target; // @synthesize target=_target;
- (id)createNow;
- (void)dealloc;
- (id)initWithCreationBlock:(CDUnknownBlockType)arg1 automatic:(_Bool)arg2 enforcing:(_Bool)arg3;

@end

