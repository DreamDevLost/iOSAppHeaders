//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface OAAttachment : NSObject
{
    NSString *name;
    NSString *fileName;
    NSString *contentType;
    NSData *data;
}

@property(copy, nonatomic) NSData *data; // @synthesize data;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void)dealloc;
- (id)initWithName:(id)arg1 filename:(id)arg2 contentType:(id)arg3 data:(id)arg4;

@end

