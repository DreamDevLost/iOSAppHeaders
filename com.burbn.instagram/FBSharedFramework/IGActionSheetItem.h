//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGActionSheetItem : NSObject
{
    long long _actionStyle;
    NSString *_title;
    CDUnknownBlockType _onComplete;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long actionStyle; // @synthesize actionStyle=_actionStyle;
- (void).cxx_destruct;
- (void)onActionSheetHide;
- (void)onTap;
- (id)initWithTitle:(id)arg1 actionStyle:(long long)arg2 onComplete:(CDUnknownBlockType)arg3;

@end
