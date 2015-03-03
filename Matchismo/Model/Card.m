//
//  Card.m
//  Matchismo
//
//  Created by Kirafreaky on 5/2/14.
//  Copyright (c) 2014 CyberiaLab. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.content isEqualToString:self.content]) {
            score = 1;
        }
    }
    
    return score;
}

@end
