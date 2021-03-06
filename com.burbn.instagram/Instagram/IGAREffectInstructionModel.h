//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGAREffectInstructionModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_token;
    NSString *_text;
    NSString *_imageUri;
}

@property(readonly, copy, nonatomic) NSString *imageUri; // @synthesize imageUri=_imageUri;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithToken:(id)arg1 text:(id)arg2 imageUri:(id)arg3;

@end

