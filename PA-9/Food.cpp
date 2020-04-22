//
//  Food.cpp
//  PA-9
//
//  Created by will on 4/20/20.
//  Copyright © 2020 will. All rights reserved.
//

#include "Food.h"
//#include "GameEngine.h"
using namespace std;

Food::Food (sf:: Vector2f loc)
{
    location = loc;
    //scr = window;
    color = sf::Color::Red;
    food = getRectangleAt(location, color) ;
}
sf::RectangleShape Food::getFood()
{
    return food;
}
void Food::drawFood(sf:: RenderWindow * scr)
{
    scr->draw(food);
}
void Food:: setFood()
{
    location = sf::Vector2f(20,20);
    food = getRectangleAt(location, color);
}
