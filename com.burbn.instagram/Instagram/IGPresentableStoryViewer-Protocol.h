//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@protocol IGPresentableStoryViewer <NSObject>
@property(readonly, copy, nonatomic) NSString *viewModelIdentifier;
@property(readonly, nonatomic) UIView *backgroundViewForAnimation;
@property(readonly, nonatomic) UIView *contentViewForSnapshot;
@property(readonly, nonatomic) UIView *contentViewForAnimation;
@property(readonly, nonatomic) UIView *profileImageViewForAnimation;
@end

