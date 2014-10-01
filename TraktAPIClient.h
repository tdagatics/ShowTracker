//
//  TraktAPIClient.h
//  ShowTracker
//
//  Created by Anthony Dagati on 9/30/14.
//  Copyright (c) 2014 Ray Wenderlich. All rights reserved.
//

// 1
#import <AFNetworking/AFNetworking.h>

// 2
extern NSString * const kTraktAPIKey;
extern NSString * const kTraktBaseURLString;

// 3
@interface TraktAPIClient : AFHTTPSessionManager

// 4
+ (TraktAPIClient *)sharedClient;

// 5
-(void)getShowsForDate:(NSDate *)date
              username:(NSString *)username
          numberOfDays:(int)numberOfDays
               success:(void(^)(NSURLSessionDataTask *task, id responseObject))success
               failure:(void(^)(NSURLSessionDataTask *task, NSError *error))failure;
@end
