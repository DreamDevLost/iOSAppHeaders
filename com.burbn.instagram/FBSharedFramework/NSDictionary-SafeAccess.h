//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@interface NSDictionary (SafeAccess)
- (id)ig_objectForKeyPath:(id)arg1 error:(id *)arg2;
- (id)ig_urlForKeyOrNil:(id)arg1;
- (id)ig_dictionaryForKey:(id)arg1 defaultValue:(id)arg2;
- (id)ig_dictionaryForKeyOrNil:(id)arg1;
- (id)ig_arrayForKey:(id)arg1 defaultValue:(id)arg2;
- (id)ig_arrayForKeyOrNil:(id)arg1;
- (id)ig_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)ig_stringForKeyOrNil:(id)arg1;
- (float)ig_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (id)ig_objectForKey:(id)arg1 defaultValue:(id)arg2;
- (_Bool)ig_boolForKey:(id)arg1;
- (void)ig_withObjectForKeyOrNil:(id)arg1 ignoreIfMissing:(_Bool)arg2 perform:(CDUnknownBlockType)arg3;
- (id)ig_objectForKeyOrNil:(id)arg1;
@end

