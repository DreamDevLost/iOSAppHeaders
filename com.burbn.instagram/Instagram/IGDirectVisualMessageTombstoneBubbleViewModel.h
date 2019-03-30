//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectMessageBubbleStyle, IGDirectVisualMessageTombstoneBubbleImageConfig, IGStyledString;

@interface IGDirectVisualMessageTombstoneBubbleViewModel : FBValueObject <NSCopying, NSCoding>
{
    IGDirectVisualMessageTombstoneBubbleImageConfig *_imageConfig;
    IGStyledString *_styledString;
    IGDirectMessageBubbleStyle *_bubbleStyle;
    struct CGSize _styledStringSize;
    struct CGSize _bubbleSize;
    struct UIEdgeInsets _bubbleInsets;
}

+ (id)viewModelWithVisualMessage:(id)arg1 visualMessageViewModel:(id)arg2 outgoingMessageStatus:(id)arg3 cellViewModel:(id)arg4 contentStringStyles:(id)arg5 messageIsLoading:(_Bool)arg6 canShowLoadingString:(_Bool)arg7 useIconInStyledString:(_Bool)arg8;
@property(readonly, copy, nonatomic) IGDirectMessageBubbleStyle *bubbleStyle; // @synthesize bubbleStyle=_bubbleStyle;
@property(readonly, nonatomic) struct UIEdgeInsets bubbleInsets; // @synthesize bubbleInsets=_bubbleInsets;
@property(readonly, nonatomic) struct CGSize bubbleSize; // @synthesize bubbleSize=_bubbleSize;
@property(readonly, nonatomic) struct CGSize styledStringSize; // @synthesize styledStringSize=_styledStringSize;
@property(readonly, copy, nonatomic) IGStyledString *styledString; // @synthesize styledString=_styledString;
@property(readonly, copy, nonatomic) IGDirectVisualMessageTombstoneBubbleImageConfig *imageConfig; // @synthesize imageConfig=_imageConfig;
- (void).cxx_destruct;
- (id)initWithImageConfig:(id)arg1 styledString:(id)arg2 styledStringSize:(struct CGSize)arg3 bubbleSize:(struct CGSize)arg4 bubbleInsets:(struct UIEdgeInsets)arg5 bubbleStyle:(id)arg6;

@end

