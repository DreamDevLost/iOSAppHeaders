//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGenericMegaphone, IGMegaphonePresenterContext, UIView;

@protocol IGMegaphonePresenterProtocol <NSObject>
+ (_Bool)canPresentMegaphone:(IGGenericMegaphone *)arg1 context:(IGMegaphonePresenterContext *)arg2;
@property(readonly, nonatomic) UIView *viewForMegaphone;
- (void)logMegaphoneSeen;
- (id)initWithMegaphone:(IGGenericMegaphone *)arg1 context:(IGMegaphonePresenterContext *)arg2;
@end
