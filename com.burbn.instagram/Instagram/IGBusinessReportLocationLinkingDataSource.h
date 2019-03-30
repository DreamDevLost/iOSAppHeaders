//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IGBusinessReportLocationLinkingDataSource : NSObject
{
    NSArray *_reasons;
    NSArray *_reasonTagForLogging;
    NSArray *_infoPageReportReasons;
    NSArray *_infoPageWithBusinessReportReasons;
    _Bool _hasLinkedBusiness;
}

@property(nonatomic) _Bool hasLinkedBusiness; // @synthesize hasLinkedBusiness=_hasLinkedBusiness;
- (void).cxx_destruct;
- (id)reportTitle;
- (id)reasonTagForLoggingAtIndex:(long long)arg1;
- (id)infoPageReportReasons;
- (id)reportReasons;
- (id)reportTableTitle;
- (id)init;

@end
