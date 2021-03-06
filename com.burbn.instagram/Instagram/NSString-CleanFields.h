//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (CleanFields)
+ (id)emailRegex;
+ (id)usernameRegexCharacterSetWithPrefixAllowed:(_Bool)arg1;
- (id)stringByRemovingLeadingSpaces;
- (id)stringByRemovingInvalidNameCharacters;
- (_Bool)containsOnlyValidNameCharacters;
- (struct _NSRange)rangeOfInvalidNameCharacters;
- (long long)composedCharacterLength;
- (_Bool)isValidEmail;
- (_Bool)containsOnlyValidEmailCharacters;
- (id)stringAfterRemovingLeadingWhitespaceAndAtCharacters;
- (id)stringByRemovingCharactersMatchingRegexCharacterSet:(id)arg1;
- (_Bool)validateWithRegexCharacterSet:(id)arg1;
- (id)stringByTransformingInvalidUsernameCharacters;
- (id)stringByStripingCombiningMarks;
- (id)stringByRemovingInvalidUsernameCharactersPrefixAllowed:(_Bool)arg1;
- (_Bool)validateUsernameWithPrefixAllowed:(_Bool)arg1;
@end

