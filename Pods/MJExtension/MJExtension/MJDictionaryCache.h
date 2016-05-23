//
//  MJDictionaryCache.h
//  MJExtensionExample
//
//  Created by MJ Lee on 15/8/22.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MJDictionaryCache : NSObject
/**
 *  缓存数据
 *
 *  @param dictId 字典标识
 *
 *  @return 缓存的字典
 */
+ (id)setObject:(id)object forKey:(id<NSCopying>)key forDictId:(const void *)dictId;

/**
 *  获得缓存的数据
 *
 *  @param dictId 字典标识
 */
+ (id)objectForKey:(id<NSCopying>)key forDictId:(const void *)dictId;

/**
 *  获得缓存的字典
 *
 *  @param dictId 字典标识
 */
+ (id)dictWithDictId:(const void *)dictId;
@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com