//
//  ZLAssets.h
//  ZLAssetsPickerDemo
//
//  Created by 张磊 on 15-1-3.
//  Copyright (c) 2015年 com.zixue101.www. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface ZLPhotoAssets : NSObject

+ (instancetype)assetWithImage:(UIImage *)image;
@property (strong,nonatomic) ALAsset *asset;

/**
 *  缩略图
 */
@property (nonatomic, strong) UIImage *aspectRatioImage;
/**
 *  缩略图
 */
@property (nonatomic, strong) UIImage *thumbImage;
/**
 *  原图
 */
@property (nonatomic, strong) UIImage *originImage;
/**
 *  获取是否是视频类型, Default = false
 */
@property (assign,nonatomic) BOOL isVideoType;
/**
 *  获取图片的URL
 */
- (NSURL *)assetURL;

@end
