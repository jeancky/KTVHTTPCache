//
//  KTVHCDataRequest.h
//  KTVHTTPCache
//
//  Created by Single on 2017/8/11.
//  Copyright © 2017年 Single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KTVHCCommon.h"


typedef NSString * KTVHCDataContentType;

KTVHTTPCACHE_EXTERN KTVHCDataContentType const KTVHCDataContentTypeVideo;
KTVHTTPCACHE_EXTERN KTVHCDataContentType const KTVHCDataContentTypeAudio;
KTVHTTPCACHE_EXTERN KTVHCDataContentType const KTVHCDataContentTypeOctetStream;


@interface KTVHCDataRequest : NSObject


+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)requestWithURLString:(NSString *)URLString headerFields:(NSDictionary *)headerFields;

@property (nonatomic, copy, readonly) NSString * URLString;
@property (nonatomic, copy, readonly) NSDictionary * headerFields;

/**
 *  default vaules:
 *  KTVHCDataContentTypeVideo
 *  KTVHCDataContentTypeAudio
 *  KTVHCDataContentTypeOctetStream
 */
@property (nonatomic, copy) NSArray <KTVHCDataContentType> * acceptContentTypes;


@end
