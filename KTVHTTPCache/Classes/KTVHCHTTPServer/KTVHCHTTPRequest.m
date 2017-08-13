//
//  KTVHCHTTPRequest.m
//  KTVHTTPCache
//
//  Created by Single on 2017/8/10.
//  Copyright © 2017年 Single. All rights reserved.
//

#import "KTVHCHTTPRequest.h"
#import "KTVHCDataRequest.h"

@interface KTVHCHTTPRequest ()

@property (nonatomic, copy) NSString * originalURLString;

@end

@implementation KTVHCHTTPRequest

+ (instancetype)requestWithOriginalURLString:(NSString *)originalURLString
{
    return [[self alloc] initWithOriginalURLString:originalURLString];
}

- (instancetype)initWithOriginalURLString:(NSString *)originalURLString
{
    if (self = [super init])
    {
        self.originalURLString = originalURLString;
    }
    return self;
}

- (KTVHCDataRequest *)dataRequest
{
    KTVHCDataRequest * dataRequest = [KTVHCDataRequest requestWithURLString:self.originalURLString];
    dataRequest.headerFields = self.headerFields;
    return dataRequest;
}

@end
