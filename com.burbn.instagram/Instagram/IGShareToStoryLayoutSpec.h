//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGShareToStoryLayoutSpec : FBValueObject <NSCopying, NSCoding>
{
    double _viewHeight;
    double _titleLeftSpace;
    struct CGSize _avatarSize;
    struct UIEdgeInsets _insets;
}

@property(readonly, nonatomic) double titleLeftSpace; // @synthesize titleLeftSpace=_titleLeftSpace;
@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) struct CGSize avatarSize; // @synthesize avatarSize=_avatarSize;
@property(readonly, nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
- (id)initWithViewHeight:(double)arg1 avatarSize:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 titleLeftSpace:(double)arg4;

@end

