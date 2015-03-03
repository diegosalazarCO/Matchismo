//
//  Deck.h
//  Matchismo
//
//  Created by Kirafreaky on 5/4/14.
//  Copyright (c) 2014 CyberiaLab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
