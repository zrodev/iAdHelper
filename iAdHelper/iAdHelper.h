//
//  iAdHelper.h
//  Rocket Doge
//
//  Created by Sven Anders Robbestad on 23.02.14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import <iAd/iAd.h>

#ifndef IADHELPER_LOGGING
    #define IADHELPER_LOGGING 0
#endif

@interface iAdHelper : NSObject

/**
 * Always access class through this singleton
 * Call it once on application start to initialize ads
 */
+(id) sharedHelper;


@property (atomic, retain) ADBannerView* bannerView;


@end
