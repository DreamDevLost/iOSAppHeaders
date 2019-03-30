//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface IGDirectoryEnumerator : NSEnumerator
{
    struct {
        struct _ftsent *_field1;
        struct _ftsent *_field2;
        struct _ftsent **_field3;
        int _field4;
        char *_field5;
        int _field6;
        int _field7;
        int _field8;
        union {
            CDUnknownFunctionPointerType _field1;
            CDUnknownBlockType _field2;
        } _field9;
        int _field10;
    } *_tree;
    NSDictionary *_fileAttributes;
    unsigned long long _level;
    NSString *_basePath;
    NSURL *_baseURL;
    unsigned long long _traversal;
    NSArray *_attributes;
}

@property(copy, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) unsigned long long traversal; // @synthesize traversal=_traversal;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithURL:(id)arg1 attributes:(id)arg2 traversal:(unsigned long long)arg3;
- (id)initWithPath:(id)arg1 attributes:(id)arg2 traversal:(unsigned long long)arg3;
- (id)init;

@end

