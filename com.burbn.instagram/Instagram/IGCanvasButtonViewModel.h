//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGCanvasElementContext, IGCanvasRichTextViewModel, IGIOSLink, NSArray, UIColor;

@interface IGCanvasButtonViewModel : NSObject <IGListDiffable>
{
    IGCanvasRichTextViewModel *_textViewModel;
    IGCanvasElementContext *_context;
    unsigned long long _buttonStyle;
    unsigned long long _buttonPosition;
    UIColor *_color;
    IGIOSLink *_destinationLink;
    NSArray *_actionLinks;
    struct UIEdgeInsets _inset;
}

@property(readonly, nonatomic) NSArray *actionLinks; // @synthesize actionLinks=_actionLinks;
@property(readonly, nonatomic) IGIOSLink *destinationLink; // @synthesize destinationLink=_destinationLink;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) unsigned long long buttonPosition; // @synthesize buttonPosition=_buttonPosition;
@property(readonly, nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(readonly, nonatomic) struct UIEdgeInsets inset; // @synthesize inset=_inset;
@property(readonly, nonatomic) IGCanvasElementContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) IGCanvasRichTextViewModel *textViewModel; // @synthesize textViewModel=_textViewModel;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTextViewModel:(id)arg1 context:(id)arg2 color:(id)arg3 actionLinks:(id)arg4 buttonStyle:(unsigned long long)arg5 buttonPosition:(unsigned long long)arg6;

@end
