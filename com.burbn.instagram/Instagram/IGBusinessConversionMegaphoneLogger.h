//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDefaultGenericMegaphoneLogger.h"

@class NSString;

@interface IGBusinessConversionMegaphoneLogger : IGDefaultGenericMegaphoneLogger
{
    id <IGBusinessConversionMegaphoneLoggerDelegate> _delegate;
    NSString *_megaphoneType;
}

@property(retain, nonatomic) NSString *megaphoneType; // @synthesize megaphoneType=_megaphoneType;
@property(nonatomic) __weak id <IGBusinessConversionMegaphoneLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logPersistentIconNotBusiness;
- (void)logMegaphoneDismissed:(id)arg1;
- (void)logMegaphoneButtonTapped:(id)arg1 onButton:(id)arg2;

@end

