//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIView;

@interface IGActionSheetConfiguration : NSObject
{
    UIView *_headerView;
    NSArray *_buttons;
}

+ (id)standardInviteNetEgoConfiguration;
+ (id)standardBrandPollConfiguration;
+ (id)secondaryAdConfiguration;
+ (id)standardBusinessConversionNetegoConfiguration;
+ (id)standardInviteFromFBConfiguration;
+ (id)standardAd4AdConfiguration;
@property(readonly, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (id)initWithHeaderView:(id)arg1 buttons:(id)arg2;

@end

