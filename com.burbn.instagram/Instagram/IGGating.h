//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface IGGating : NSObject <NSCoding>
{
    unsigned long long _gatingType;
    NSString *_code;
    NSString *_title;
    NSString *_message;
    NSArray *_buttons;
    NSString *_alertTitle;
    NSString *_alertMessage;
    NSArray *_alertButtons;
}

+ (id)gatingForDict:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *alertButtons; // @synthesize alertButtons=_alertButtons;
@property(readonly, copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(readonly, copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(readonly, copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(readonly, nonatomic) unsigned long long gatingType; // @synthesize gatingType=_gatingType;
- (void).cxx_destruct;
- (_Bool)shouldBlockUFIAction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithGatingType:(unsigned long long)arg1 code:(id)arg2 title:(id)arg3 message:(id)arg4 buttons:(id)arg5 alertTitle:(id)arg6 alertMessage:(id)arg7 alertButtons:(id)arg8;

@end

