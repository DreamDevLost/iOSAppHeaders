//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCancelable.h"

@interface FBCancelHandle : NSObject <FBCancelable>
{
    struct mutex _mutex;
    _Bool _cancelled;
    CDUnknownBlockType _cancelBlock;
}

+ (id)newWithCancelBlock:(CDUnknownBlockType)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)resetCancelBlock;
- (void)setCancelBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool cancelled;

@end
