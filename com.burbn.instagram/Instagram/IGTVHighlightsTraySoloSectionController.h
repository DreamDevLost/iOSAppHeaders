//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListGenericSectionController.h"

@class IGTVGuideSingleChannelDataSource, IGUserSession;

@interface IGTVHighlightsTraySoloSectionController : IGListGenericSectionController
{
    IGUserSession *_userSession;
    IGTVGuideSingleChannelDataSource *_tvGuideDataSource;
    double _bottomPadding;
    _Bool _shouldShowBottomBorder;
    id <IGTVHighlightsTraySectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTVHighlightsTraySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithBottomPadding:(double)arg1 shouldShowBottomBorder:(_Bool)arg2 userSession:(id)arg3;

@end
