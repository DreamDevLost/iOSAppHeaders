//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IGDirectPublishedMessageSetBuilder : NSObject
{
    NSMutableArray *_collectionsOfMessages;
}

+ (id)builderWithMessageSet:(id)arg1;
+ (id)builder;
- (void).cxx_destruct;
- (void)_addMessages:(id)arg1;
- (id)build;
- (id)addMessagesFromPublishedMessageSet:(id)arg1;
- (id)addMessagesFromArray:(id)arg1;
- (id)init;

@end

