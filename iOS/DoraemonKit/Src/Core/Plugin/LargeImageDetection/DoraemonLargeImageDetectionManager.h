//
//  DoraemonLargeImageDetectionManager.h
//  DoraemonKit
//
//  Created by licd on 2019/5/15.
//

#import <Foundation/Foundation.h>
@class DoraemonResponseImageModel;

NS_ASSUME_NONNULL_BEGIN

@interface DoraemonLargeImageDetectionManager : NSObject
@property (nonatomic, strong) NSMutableArray *images;
@property (nonatomic, assign) BOOL detecting;

+ (instancetype) shareInstance;
- (void)updateInterceptStatus;
@end

NS_ASSUME_NONNULL_END
