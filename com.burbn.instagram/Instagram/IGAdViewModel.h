//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAdPaymentInfo, IGTextWithEntities, NSArray, NSString, NSURL, UIColor;

@interface IGAdViewModel : NSObject
{
    _Bool _allowAppeal;
    NSString *_mediaId;
    NSString *_organicMediaId;
    NSURL *_thumbnailURL;
    NSString *_callToAction;
    NSString *_callToActionType;
    NSString *_facebookID;
    NSURL *_callToActionURL;
    NSString *_audienceName;
    NSArray *_instagramPositions;
    NSString *_totalBudget;
    NSString *_totalDuration;
    NSString *_timeLeft;
    NSString *_postObjectiveType;
    NSString *_numberOfClicks;
    NSString *_numberOfReached;
    NSString *_boostID;
    NSString *_appealStatus;
    NSString *_appealSupportInboxUrl;
    NSString *_boostingStatus;
    IGTextWithEntities *_pendingStatus;
    NSString *_endDate;
    IGAdPaymentInfo *_paymentInfo;
}

@property(readonly, nonatomic) IGAdPaymentInfo *paymentInfo; // @synthesize paymentInfo=_paymentInfo;
@property(readonly, copy, nonatomic) NSString *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) IGTextWithEntities *pendingStatus; // @synthesize pendingStatus=_pendingStatus;
@property(readonly, copy, nonatomic) NSString *boostingStatus; // @synthesize boostingStatus=_boostingStatus;
@property(readonly, nonatomic) _Bool allowAppeal; // @synthesize allowAppeal=_allowAppeal;
@property(readonly, copy, nonatomic) NSString *appealSupportInboxUrl; // @synthesize appealSupportInboxUrl=_appealSupportInboxUrl;
@property(readonly, copy, nonatomic) NSString *appealStatus; // @synthesize appealStatus=_appealStatus;
@property(readonly, copy, nonatomic) NSString *boostID; // @synthesize boostID=_boostID;
@property(readonly, copy, nonatomic) NSString *numberOfReached; // @synthesize numberOfReached=_numberOfReached;
@property(readonly, copy, nonatomic) NSString *numberOfClicks; // @synthesize numberOfClicks=_numberOfClicks;
@property(readonly, copy, nonatomic) NSString *postObjectiveType; // @synthesize postObjectiveType=_postObjectiveType;
@property(readonly, copy, nonatomic) NSString *timeLeft; // @synthesize timeLeft=_timeLeft;
@property(readonly, copy, nonatomic) NSString *totalDuration; // @synthesize totalDuration=_totalDuration;
@property(readonly, copy, nonatomic) NSString *totalBudget; // @synthesize totalBudget=_totalBudget;
@property(readonly, copy, nonatomic) NSArray *instagramPositions; // @synthesize instagramPositions=_instagramPositions;
@property(readonly, copy, nonatomic) NSString *audienceName; // @synthesize audienceName=_audienceName;
@property(readonly, copy, nonatomic) NSURL *callToActionURL; // @synthesize callToActionURL=_callToActionURL;
@property(readonly, copy, nonatomic) NSString *facebookID; // @synthesize facebookID=_facebookID;
@property(readonly, copy, nonatomic) NSString *callToActionType; // @synthesize callToActionType=_callToActionType;
@property(readonly, copy, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
@property(readonly, copy, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(readonly, copy, nonatomic) NSString *organicMediaId; // @synthesize organicMediaId=_organicMediaId;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithFacebookID:(id)arg1 organicMediaId:(id)arg2 thumbnailURL:(id)arg3 mediaId:(id)arg4 callToAction:(id)arg5 callToActionURL:(id)arg6 callToActionType:(id)arg7 audienceName:(id)arg8 instagramPositions:(id)arg9 totalBudget:(id)arg10 totalDuration:(id)arg11 timeLeft:(id)arg12 postObjectiveType:(id)arg13 numberOfClicks:(id)arg14 numberOfReached:(id)arg15 boostID:(id)arg16 appealStatus:(id)arg17 appealSupportInboxUrl:(id)arg18 allowAppeal:(_Bool)arg19 boostingStatus:(id)arg20 pendingStatus:(id)arg21 endDate:(id)arg22 paymentsInfo:(id)arg23;
@property(readonly) NSString *loggingStatus;
@property(readonly) _Bool showTwoRowsInStatusSection;
@property(readonly) NSString *secondaryStatusRowDetailedText;
@property(readonly) NSString *secondaryStatusRowTitle;
@property(readonly) NSString *pauseResumeString;
@property(readonly) NSString *viewAppealString;
@property(readonly) NSString *appealString;
@property(readonly) NSString *deleteString;
@property(readonly) IGTextWithEntities *errorStatus;
@property(readonly) NSString *headerSubtitle;
@property(readonly) NSString *headerTitle;
@property(readonly) UIColor *adsManagerCellColorForSubtitle;
@property(readonly) NSString *adsManagerCellSubtitle;
@property(readonly) NSString *adsManagerCellTitle;
@property(readonly, nonatomic) _Bool canViewAppeal;
@property(readonly, nonatomic) _Bool canAppeal;
@property(readonly, nonatomic) _Bool appealInProgress;
@property(readonly, copy, nonatomic) NSString *displayStatus;

@end

