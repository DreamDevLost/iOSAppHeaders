//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface IGPlaceholderImageConfig : NSObject
{
    UIImage *_placeholderImage;
    long long _placeholderTransitionBehavior;
}

+ (id)noPlaceholderImage;
@property(readonly, nonatomic) long long placeholderTransitionBehavior; // @synthesize placeholderTransitionBehavior=_placeholderTransitionBehavior;
@property(readonly, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (id)initWithPlaceholderImage:(id)arg1 placeholderTransitionBehavior:(long long)arg2;

@end
