//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface IGCameraStickerFrameModel : NSObject <NSSecureCoding>
{
    long long _type;
    NSString *_pk;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPK:(id)arg1 type:(long long)arg2;

@end

