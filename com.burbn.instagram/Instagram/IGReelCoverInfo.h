//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface IGReelCoverInfo : NSObject
{
    NSURL *_coverURL;
    double _coverWidth;
    double _coverHeight;
    NSString *_coverMediaID;
    NSURL *_fullSizeURL;
    double _fullSizeWidth;
    double _fullSizeHeight;
    struct CGRect _cropRect;
}

@property(readonly, nonatomic) double fullSizeHeight; // @synthesize fullSizeHeight=_fullSizeHeight;
@property(readonly, nonatomic) double fullSizeWidth; // @synthesize fullSizeWidth=_fullSizeWidth;
@property(readonly, nonatomic) NSURL *fullSizeURL; // @synthesize fullSizeURL=_fullSizeURL;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, copy, nonatomic) NSString *coverMediaID; // @synthesize coverMediaID=_coverMediaID;
@property(readonly, nonatomic) double coverHeight; // @synthesize coverHeight=_coverHeight;
@property(readonly, nonatomic) double coverWidth; // @synthesize coverWidth=_coverWidth;
@property(readonly, nonatomic) NSURL *coverURL; // @synthesize coverURL=_coverURL;
- (void).cxx_destruct;
- (id)initWithCoverURL:(id)arg1 coverWidth:(double)arg2 coverHeight:(double)arg3 coverMediaID:(id)arg4 cropRect:(struct CGRect)arg5 fullSizeURL:(id)arg6 fullSizeWidth:(double)arg7 fullSizeHeight:(double)arg8;

@end
