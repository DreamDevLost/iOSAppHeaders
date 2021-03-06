//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSData, NSDate;

@interface IGRageShakeScreenshotAttachment : FBValueObject <NSCopying, NSCoding>
{
    NSData *_screenshotData;
    NSData *_windowDescriptionData;
    NSDate *_creationTime;
}

@property(readonly, copy, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, copy, nonatomic) NSData *windowDescriptionData; // @synthesize windowDescriptionData=_windowDescriptionData;
@property(readonly, copy, nonatomic) NSData *screenshotData; // @synthesize screenshotData=_screenshotData;
- (void).cxx_destruct;
- (id)initWithScreenshotData:(id)arg1 windowDescriptionData:(id)arg2 creationTime:(id)arg3;

@end

