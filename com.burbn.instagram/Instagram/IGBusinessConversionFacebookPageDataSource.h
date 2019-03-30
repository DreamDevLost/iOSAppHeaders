//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGraphQLCachePolicy.h"

@class IGBusinessCategoryTypeaheadResultParser, IGBusinessConversionFacebookPageCategoryParser, IGBusinessConversionFacebookPageContactInfoUpdateParser, IGBusinessConversionFacebookPageCreationParser, IGBusinessConversionFacebookPageNameCheckParser, IGBusinessConversionFacebookPageSuggestedCategoryParser, IGBusinessConversionSelectionGraphQLHelper, IGUserSession, NSString;

@interface IGBusinessConversionFacebookPageDataSource : NSObject <IGGraphQLCachePolicy>
{
    IGUserSession *_userSession;
    IGBusinessConversionFacebookPageCategoryParser *_categoryParser;
    IGBusinessConversionFacebookPageCreationParser *_creationParser;
    IGBusinessConversionFacebookPageSuggestedCategoryParser *_suggestedCategoryParser;
    IGBusinessConversionFacebookPageNameCheckParser *_nameCheckParser;
    IGBusinessConversionFacebookPageContactInfoUpdateParser *_contactInfoUpdateParser;
    IGBusinessConversionSelectionGraphQLHelper *_pageParser;
    IGBusinessCategoryTypeaheadResultParser *_typeaheadParser;
    id <IGFBIdentityProvisioning> _fbIdProvisioning;
}

@property(retain, nonatomic) id <IGFBIdentityProvisioning> fbIdProvisioning; // @synthesize fbIdProvisioning=_fbIdProvisioning;
@property(readonly, nonatomic) IGBusinessCategoryTypeaheadResultParser *typeaheadParser; // @synthesize typeaheadParser=_typeaheadParser;
@property(readonly, nonatomic) IGBusinessConversionSelectionGraphQLHelper *pageParser; // @synthesize pageParser=_pageParser;
@property(readonly, nonatomic) IGBusinessConversionFacebookPageContactInfoUpdateParser *contactInfoUpdateParser; // @synthesize contactInfoUpdateParser=_contactInfoUpdateParser;
@property(readonly, nonatomic) IGBusinessConversionFacebookPageNameCheckParser *nameCheckParser; // @synthesize nameCheckParser=_nameCheckParser;
@property(readonly, nonatomic) IGBusinessConversionFacebookPageSuggestedCategoryParser *suggestedCategoryParser; // @synthesize suggestedCategoryParser=_suggestedCategoryParser;
@property(readonly, nonatomic) IGBusinessConversionFacebookPageCreationParser *creationParser; // @synthesize creationParser=_creationParser;
@property(readonly, nonatomic) IGBusinessConversionFacebookPageCategoryParser *categoryParser; // @synthesize categoryParser=_categoryParser;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (_Bool)isCacheValidForRequest:(id)arg1 cachedObject:(id)arg2;
- (void)switchToPage:(id)arg1 fbAuthToken:(id)arg2 isFirstPartyToken:(_Bool)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)fetchFacebookPages:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)fetchRecommendedCategoriesForVerticalID:(long long)arg1 locale:(id)arg2 withSuccessHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)fetchCategoriesForVerticalID:(long long)arg1 query:(id)arg2 locale:(id)arg3 withSuccessHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)fetchCategoryNameSuggestion:(id)arg1 locale:(id)arg2 withSuccessHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)uploadProfileImage:(id)arg1 toPage:(id)arg2 byPageAccessToken:(id)arg3 withSuccessHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)updateFacebookPage:(id)arg1 contactInfoWithPhone:(id)arg2 email:(id)arg3 street:(id)arg4 cityId:(id)arg5 zipcode:(id)arg6 withSuccessHandler:(CDUnknownBlockType)arg7 errorHandler:(CDUnknownBlockType)arg8;
- (void)createFacebookPageByPageName:(id)arg1 category:(id)arg2 withSuccessHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)validatePageName:(id)arg1 withSuccessHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)fetchFacebookPageById:(id)arg1 withSuccessHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)fetchSuggestedPageCategoriesByPageName:(id)arg1 ofTopN:(unsigned long long)arg2 withSuccessHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)fetchSubCategoriesBySuperCategoryId:(id)arg1 withSuccessHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)fetchSuperCategoriesWithSuccessHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;
- (id)_adjustImage:(id)arg1;
- (struct CGSize)_calculateProperImageSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
