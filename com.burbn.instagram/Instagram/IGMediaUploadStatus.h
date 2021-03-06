//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGMediaUploadStatus : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isCanceled;
    _Bool _wasDropped;
    long long _step;
    long long _stepState;
}

@property(readonly, nonatomic) _Bool wasDropped; // @synthesize wasDropped=_wasDropped;
@property(readonly, nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(readonly, nonatomic) long long stepState; // @synthesize stepState=_stepState;
@property(readonly, nonatomic) long long step; // @synthesize step=_step;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStep:(long long)arg1 stepState:(long long)arg2 isCanceled:(_Bool)arg3 wasDropped:(_Bool)arg4;
- (id)initWithCoder:(id)arg1;

@end

