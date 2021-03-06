//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGNotificationSettingsItem : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_title;
    unsigned long long _renderType;
    NSString *_renderTypeString;
    NSString *_contentType;
    NSString *_icon;
    NSString *_settingValue;
}

@property(readonly, copy, nonatomic) NSString *settingValue; // @synthesize settingValue=_settingValue;
@property(readonly, copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *renderTypeString; // @synthesize renderTypeString=_renderTypeString;
@property(readonly, nonatomic) unsigned long long renderType; // @synthesize renderType=_renderType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 renderType:(unsigned long long)arg2 renderTypeString:(id)arg3 contentType:(id)arg4 icon:(id)arg5 settingValue:(id)arg6;

@end

