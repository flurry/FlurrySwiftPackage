//
//  FlurryAdDelegate.h
//  Flurry
//
//  Copyright 2010 - 2013 Flurry, Inc. All rights reserved.
//
//  Methods in this header file are for use with Flurry
//

#import <UIKit/UIKit.h>

@class FlurryAdStream;

/*!
 *  @brief Provides all available delegates for receiving callbacks related to Ad Serving.
 *
 *  Set of methods that allow developers to manage and take actions within
 *  different phases of App ad display.
 *
 *  @note This class serves as a delegate for FlurryAds. \n
 *  For additional information on how to use Flurry's Ads SDK to
 *  attract high-quality users and monetize your user base see <a href="http://wiki.flurry.com/index.php?title=Publisher">Support Center - Publisher</a>.
 *  @author 2010 - 2013 Flurry, Inc. All Rights Reserved.
 *  @version 4.3.0
 *
 */
@protocol FlurryAdStreamDelegate <NSObject>

@optional

- (void) adStreamDidFetchAd:(FlurryAdStream*)flurryAd;

- (void) adStreamDidFailToFetchAd:(FlurryAdStream*)flurryAd error:(NSError *)error;

- (void) adStreamDidRender:(FlurryAdStream*)flurryAd;

- (void) adStreamDidFailToRender:(FlurryAdStream*)flurryAd error:(NSError *)error;

- (void) adStreamWillPresentFullscreen:(FlurryAdStream*)flurryAd;

- (void) adStreamWillLeaveApplication:(FlurryAdStream*)flurryAd;

- (void) adStreamWillDismissFullscreen:(FlurryAdStream*)flurryAd;

- (void) adStreamDidDismissFullscreen:(FlurryAdStream*)flurryAd;

- (void) adStreamDidReceiveClick:(FlurryAdStream*)flurryAd;

- (void) adStreamVideoDidFinish:(FlurryAdStream*)flurryAd;

@end
