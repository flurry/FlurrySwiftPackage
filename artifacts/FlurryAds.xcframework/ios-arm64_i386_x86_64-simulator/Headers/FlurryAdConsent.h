//
//  FlurryAdConsent.h
//  FlurryAds
//
//  Created by Yuning Jin on 4/11/18.
//  Copyright © 2018 Flurry Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FlurryConsent.h"
#import "Flurry+Internal.h"
#import "FlurryAdActor.h"

@interface FlurryAdConsent : FlurryAdActor<IFlurryConsentObserver>

@property (nonatomic, assign) BOOL overrideAppTrackingAuthorizationStatus;

+ (instancetype) sharedInstance;

@end
