//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString;

@interface IGBusinessAttributeSyncSettingsViewModel : NSObject
{
    _Bool _isToggleOn;
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
}

@property(nonatomic) _Bool isToggleOn; // @synthesize isToggleOn=_isToggleOn;
@property(readonly, copy, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 isToggleOn:(_Bool)arg3;

@end

