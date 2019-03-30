//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGActivityToastData, IGActivityToastItem;

@interface IGActivityToastView : UIView
{
    IGActivityToastItem *_commentsItem;
    IGActivityToastItem *_likesItem;
    IGActivityToastItem *_relationshipsItem;
    IGActivityToastItem *_usertagsItem;
    _Bool _onlyShowComments;
    IGActivityToastData *_toastData;
}

@property(nonatomic) _Bool onlyShowComments; // @synthesize onlyShowComments=_onlyShowComments;
@property(retain, nonatomic) IGActivityToastData *toastData; // @synthesize toastData=_toastData;
- (void).cxx_destruct;
- (void)_updateAndHideWhenItemHasZeroCount:(id)arg1 count:(long long)arg2 atOriginX:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
