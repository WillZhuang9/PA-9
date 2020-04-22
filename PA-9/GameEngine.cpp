//
//  GameEngine.cpp
//  PA-9
//
//  Created by will on 4/22/20.
//  Copyright © 2020 will. All rights reserved.
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "GameEngine.h"
sf::RectangleShape getRectangleAt(sf::Vector2f location, sf::Color color)
{
    sf::RectangleShape item (sf::Vector2f (10, 10));
    item.setFillColor(color);
    item.setPosition(location);
    return item;
}
bool checkCollision(const sf::RectangleShape& shape_1, const sf:: RectangleShape& shape_2)
{
    if(shape_1.getPosition() == shape_2.getPosition())
        return true;
    return false;
}

bool checkCollisionAtBounder(const sf::RectangleShape& item)
{
    return true;
}

