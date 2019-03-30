//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectMessageCellLayoutSpec, IGDirectMessageCellTheme, IGDirectMessageReactionsViewModel, IGDirectMessageSidebarStatusViewModel, IGDirectMessageViewModelContext, IGDirectMessageViewModelMetadata, NSString;

@interface IGDirectMessageCellViewModel : FBValueObject <NSCopying, NSCoding>
{
    IGDirectMessageViewModelContext *_context;
    IGDirectMessageViewModelMetadata *_metadata;
    IGDirectMessageCellTheme *_theme;
    IGDirectMessageCellLayoutSpec *_layoutSpec;
    IGDirectMessageSidebarStatusViewModel *_sidebarStatusViewModel;
    IGDirectMessageReactionsViewModel *_reactionsViewModel;
    NSString *_module;
}

+ (id)viewModelWithSender:(id)arg1 context:(id)arg2 themeProvider:(id)arg3 contentStringStylesProvider:(id)arg4 experimentSetProvider:(id)arg5 nextSenderPK:(id)arg6 previousSenderPK:(id)arg7 accessibilityDescription:(id)arg8 message:(id)arg9 outgoingMessageStatus:(id)arg10 playableMessageState:(unsigned long long)arg11 replyable:(id)arg12 reactionsViewModel:(id)arg13 sidebarStatusViewModel:(id)arg14 currentActionSummary:(id)arg15 canDisplayUsername:(_Bool)arg16 willShowTimestampAfter:(_Bool)arg17 footerText:(id)arg18 viewWidth:(double)arg19 analyticsModule:(id)arg20;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, copy, nonatomic) IGDirectMessageReactionsViewModel *reactionsViewModel; // @synthesize reactionsViewModel=_reactionsViewModel;
@property(readonly, copy, nonatomic) IGDirectMessageSidebarStatusViewModel *sidebarStatusViewModel; // @synthesize sidebarStatusViewModel=_sidebarStatusViewModel;
@property(readonly, copy, nonatomic) IGDirectMessageCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, copy, nonatomic) IGDirectMessageCellTheme *theme; // @synthesize theme=_theme;
@property(readonly, copy, nonatomic) IGDirectMessageViewModelMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) IGDirectMessageViewModelContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 metadata:(id)arg2 theme:(id)arg3 layoutSpec:(id)arg4 sidebarStatusViewModel:(id)arg5 reactionsViewModel:(id)arg6 module:(id)arg7;
- (_Bool)shouldDisableLinks;
- (_Bool)hasFailed;
- (_Bool)isUploading;
- (id)copyWithReactionsViewModel:(id)arg1;

@end

