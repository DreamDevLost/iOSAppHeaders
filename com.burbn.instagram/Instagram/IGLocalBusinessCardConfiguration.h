//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGLocalBusinessCardConfiguration : FBValueObject <NSCopying, NSCoding>
{
    _Bool _allowLocationChange;
    _Bool _allowLoadingMore;
    _Bool _allowRefresh;
    _Bool _showMapView;
    NSString *_profileChainingTargetUserID;
    NSString *_navBarTitle;
    NSString *_navBarSubtitle;
    NSString *_chainedBusinessName;
}

@property(readonly, copy, nonatomic) NSString *chainedBusinessName; // @synthesize chainedBusinessName=_chainedBusinessName;
@property(readonly, copy, nonatomic) NSString *navBarSubtitle; // @synthesize navBarSubtitle=_navBarSubtitle;
@property(readonly, copy, nonatomic) NSString *navBarTitle; // @synthesize navBarTitle=_navBarTitle;
@property(readonly, copy, nonatomic) NSString *profileChainingTargetUserID; // @synthesize profileChainingTargetUserID=_profileChainingTargetUserID;
@property(readonly, nonatomic) _Bool showMapView; // @synthesize showMapView=_showMapView;
@property(readonly, nonatomic) _Bool allowRefresh; // @synthesize allowRefresh=_allowRefresh;
@property(readonly, nonatomic) _Bool allowLoadingMore; // @synthesize allowLoadingMore=_allowLoadingMore;
@property(readonly, nonatomic) _Bool allowLocationChange; // @synthesize allowLocationChange=_allowLocationChange;
- (void).cxx_destruct;
- (id)initWithAllowLocationChange:(_Bool)arg1 allowLoadingMore:(_Bool)arg2 allowRefresh:(_Bool)arg3 showMapView:(_Bool)arg4 profileChainingTargetUserID:(id)arg5 navBarTitle:(id)arg6 navBarSubtitle:(id)arg7 chainedBusinessName:(id)arg8;

@end

