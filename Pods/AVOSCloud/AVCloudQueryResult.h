//
//  AVCloudQueryResult.h
//  AVOS
//
//  Created by Qihe Bian on 9/22/14.
//
//

#import <Foundation/Foundation.h>

@interface AVCloudQueryResult : NSObject
/**
 *  查询结果的 className
 */
@property(nonatomic, strong, readonly) NSString *className;

/**
 *  查询的结果 AVObject 对象列表
 */
@property(nonatomic, strong, readonly) NSArray *results;

/**
 *  查询 count 结果, 只有使用 select count(*) ... 时有效
 */
@property(nonatomic, readonly) NSUInteger count;
@end

typedef void(^AVCloudQueryCallback)(AVCloudQueryResult *result, NSError *error);
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com