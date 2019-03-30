//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGBottomButtonsViewStyle, NSString;

@interface IGPromoteErrorViewModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_title;
    NSString *_subtitle;
    IGBottomButtonsViewStyle *_bottomButtonsViewStyle;
}

@property(readonly, copy, nonatomic) IGBottomButtonsViewStyle *bottomButtonsViewStyle; // @synthesize bottomButtonsViewStyle=_bottomButtonsViewStyle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 bottomButtonsViewStyle:(id)arg3;

@end

