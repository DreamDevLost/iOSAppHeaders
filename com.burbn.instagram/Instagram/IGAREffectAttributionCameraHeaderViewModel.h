//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGAREffectAttributionCameraHeaderViewModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_username;
    NSString *_effectName;
}

@property(readonly, copy, nonatomic) NSString *effectName; // @synthesize effectName=_effectName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)initWithUsername:(id)arg1 effectName:(id)arg2;

@end

