//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface IGNearbyBusinessProfileInfoViewModel : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSURL *_profileURL;
}

@property(readonly, copy, nonatomic) NSURL *profileURL; // @synthesize profileURL=_profileURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDataModel:(id)arg1 vertical:(id)arg2;

@end

