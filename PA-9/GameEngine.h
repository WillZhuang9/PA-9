//
//  GameEngine.h
//  PA-9
//
//  Created by will on 4/20/20.
//  Copyright © 2020 will. All rights reserved.
//

#ifndef GameEngine_h
#define GameEngine_h

#include<SFML/Graphics.hpp>

sf::RectangleShape getRectangleAt(sf::Vector2f, sf::Color);

bool checkCollision(const sf::RectangleShape&, const sf:: RectangleShape&);
bool checkCollisionAtBounder(const sf::RectangleShape&);

#endif /* GameEngine_h */
