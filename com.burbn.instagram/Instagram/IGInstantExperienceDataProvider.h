//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBBusinessExtensionAutofillDataProviding.h"

@class IGUserSession;

@interface IGInstantExperienceDataProvider : NSObject <FBBusinessExtensionAutofillDataProviding>
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_processDataForCurrentUser:(id)arg1 existingAutofillInfoDict:(id)arg2 userUpdater:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)updateAutofillDataFromUserProfileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1;

@end

