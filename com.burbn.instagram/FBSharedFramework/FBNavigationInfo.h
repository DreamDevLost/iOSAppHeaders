//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPopoverInfo, NSString, NSURL, UIViewController;

@interface FBNavigationInfo : NSObject
{
    UIViewController *_viewController;
    NSURL *_URL;
    unsigned long long _method;
    unsigned long long _options;
    FBPopoverInfo *_popoverInfo;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _whenClosed;
    CDUnknownBlockType _whenClosedWithStatus;
    double _timestamp;
    NSString *_sourceApplication;
}

+ (id)infoWithURL:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 completion:(CDUnknownBlockType)arg5 whenClosed:(CDUnknownBlockType)arg6 whenClosedWithStatus:(CDUnknownBlockType)arg7 timestamp:(double)arg8;
+ (id)infoWithURL:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 whenClosedWithStatus:(CDUnknownBlockType)arg5;
+ (id)infoWithURL:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 completion:(CDUnknownBlockType)arg5 whenClosed:(CDUnknownBlockType)arg6;
+ (id)infoWithURL:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 whenClosed:(CDUnknownBlockType)arg5;
+ (id)infoWithURL:(id)arg1 popoverInfo:(id)arg2;
+ (id)infoWithURL:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)infoWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2 whenClosed:(CDUnknownBlockType)arg3;
+ (id)infoWithURL:(id)arg1;
+ (id)navigationInfoWithTimestamp:(id)arg1;
+ (id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 completion:(CDUnknownBlockType)arg5 whenClosed:(CDUnknownBlockType)arg6 timestamp:(double)arg7;
+ (id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4 completion:(CDUnknownBlockType)arg5 whenClosed:(CDUnknownBlockType)arg6;
+ (id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 popoverInfo:(id)arg4;
+ (id)infoWithViewController:(id)arg1 popoverInfo:(id)arg2 completion:(CDUnknownBlockType)arg3 whenClosed:(CDUnknownBlockType)arg4;
+ (id)infoWithViewController:(id)arg1 popoverInfo:(id)arg2;
+ (id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 whenClosed:(CDUnknownBlockType)arg5;
+ (id)infoWithViewController:(id)arg1 method:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)infoWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2 whenClosed:(CDUnknownBlockType)arg3;
+ (id)infoWithViewController:(id)arg1;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) CDUnknownBlockType whenClosedWithStatus; // @synthesize whenClosedWithStatus=_whenClosedWithStatus;
@property(copy, nonatomic) CDUnknownBlockType whenClosed; // @synthesize whenClosed=_whenClosed;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) FBPopoverInfo *popoverInfo; // @synthesize popoverInfo=_popoverInfo;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long method; // @synthesize method=_method;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;

@end

