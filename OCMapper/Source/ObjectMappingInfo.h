//
//  ObjectMapperInfo.h
//  OCMapper
//
//  Created by Aryan Gh on 4/14/13.
//  Copyright (c) 2013 Aryan Ghassemi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ObjectMappingInfo : NSObject

@property (nonatomic, copy) NSString *dictionaryKey;
@property (nonatomic, copy) NSString *propertyKey;
@property (nonatomic, assign) Class objectType;

- (id)initWithDictionaryKey:(NSString *)aDictionaryKey propertyKey:(NSString *)aPropertyKey andObjectType:(Class)anObjectType;

@end
