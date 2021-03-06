//
//  NSObject+ObjectMapper.h
//  OCMapper
//
//  Created by Aryan Gh on 4/14/13.
//  Copyright (c) 2013 Aryan Ghassemi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ObjectMapper.h"

@interface NSObject (ObjectMapper)

+ (id)objectFromDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)dictionary;
- (NSDictionary *)dictionaryWrappedInParentWithKey:(NSString *)key;

@end
