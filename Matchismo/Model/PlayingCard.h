//
//  PlayingCard.h
//  Matchismo
//
//  Created by Kirafreaky on 5/2/14.
//  Copyright (c) 2014 CyberiaLab. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuit;
+ (NSUInteger)maxRank;

@end
