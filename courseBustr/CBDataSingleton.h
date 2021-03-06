//
//  CBDataSingleton.h
//  courseBustr
//
//  Created by Ke Yang on 12/29/13.
//  Copyright (c) 2013 Pyrus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CBDataSingleton : NSObject

@property (nonatomic, strong) NSMutableArray* courseList;
@property (nonatomic, strong) NSMutableArray* gradeList;
@property (nonatomic, strong) NSArray* colorList;
@property (nonatomic, strong) NSDictionary* userData;
@property (nonatomic, assign) NSInteger courseIndex;

+ (id)sharedData;

@end
