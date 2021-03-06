//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class FBAutoupdaterUpdate, NSError, NSMutableArray, NSString, NSXMLParser;

@interface FBAutoupdaterAppcastParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    NSMutableArray *_updates;
    FBAutoupdaterUpdate *_currentUpdate;
    NSError *_parserError;
}

- (void).cxx_destruct;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
- (_Bool)_isValidUpdate:(id)arg1;
- (void)_failWithError:(id *)arg1;
- (id)parseUpdateData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

