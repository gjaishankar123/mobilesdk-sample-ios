
// GenesysCloudBold version number: v1.9.0
//
//  BCOSSNotification.h
//  VisitorSDK
//
//  Created by Viktor Fabian on 3/31/14.
//  Copyright (c) 2014 LogMeIn Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCOSSNotification : NSObject

- (BOOL)processMessage:(NSDictionary *)message;

@end
