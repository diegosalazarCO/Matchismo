//
//  Card.h
//  Matchismo
//
//  Created by Kirafreaky on 5/2/14.
//  Copyright (c) 2014 CyberiaLab. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *content;
@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;


@end
