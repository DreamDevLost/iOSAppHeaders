//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface FBTransparentView : UIView
{
    _Bool _ignoresOwnTouches;
    _Bool _ignoresTouchesWhenHidden;
}

@property(nonatomic) _Bool ignoresTouchesWhenHidden; // @synthesize ignoresTouchesWhenHidden=_ignoresTouchesWhenHidden;
@property(nonatomic) _Bool ignoresOwnTouches; // @synthesize ignoresOwnTouches=_ignoresOwnTouches;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
