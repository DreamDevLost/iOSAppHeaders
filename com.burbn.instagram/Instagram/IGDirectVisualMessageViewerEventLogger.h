//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectVisualMessageViewerEventResponder.h"

@class IGDirectVisualMessageViewerLogger;

@interface IGDirectVisualMessageViewerEventLogger : NSObject <IGDirectVisualMessageViewerEventResponder>
{
    IGDirectVisualMessageViewerLogger *_logger;
}

- (void).cxx_destruct;
- (void)visualMessageViewerController:(id)arg1 didVoteForVisualMessage:(id)arg2 vote:(id)arg3;
- (void)visualMessageViewerController:(id)arg1 didTapAttributionTooltipWithModel:(id)arg2;
- (void)visualMessageViewerController:(id)arg1 didTapAttributionWithModel:(id)arg2;
- (void)visualMessageViewerController:(id)arg1 didUnpausePlaybackForVisualMessage:(id)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(id)arg1 didPausePlaybackForVisualMessage:(id)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(id)arg1 willLoadImageURL:(id)arg2 visualMessage:(id)arg3;
- (void)visualMessageViewerController:(id)arg1 willDismissForNavType:(long long)arg2;
- (void)visualMessageViewerController:(id)arg1 didEndPlaybackForVisualMessage:(id)arg2 atIndex:(long long)arg3 forNavType:(long long)arg4;
- (void)visualMessageViewerController:(id)arg1 didDetectScreenshotForVisualMessage:(id)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(id)arg1 didFailToLoadMediaForVisualMessage:(id)arg2 atIndex:(long long)arg3 error:(id)arg4 networkRequestSummary:(id)arg5;
- (void)visualMessageViewerController:(id)arg1 didBeginPlaybackForVisualMessage:(id)arg2 atIndex:(long long)arg3;
- (void)visualMessageViewerController:(id)arg1 didFinishLoadingForVisualMessage:(id)arg2 atIndex:(long long)arg3 loadSource:(id)arg4 networkRequestSummary:(id)arg5;
- (void)visualMessageViewerController:(id)arg1 didBeginLoadingForVisualMessage:(id)arg2 atIndex:(long long)arg3;
- (id)initWithThreadId:(id)arg1 entryPoint:(long long)arg2 totalMessageCount:(long long)arg3 userSession:(id)arg4;

@end

