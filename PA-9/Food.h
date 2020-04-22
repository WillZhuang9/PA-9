//
//  Food.h
//  PA-9
//
//  Created by will on 4/20/20.
//  Copyright © 2020 will. All rights reserved.
//

#ifndef Food_h
#define Food_h

#include "GameEngine.h"

#include<SFML/Graphics.hpp>
#include<random>
#include<iostream>
using namespace std;

class Food{
private:
    sf::Color color;
    sf::Vector2f location;
    sf::RectangleShape food;
    //sf::RenderWindow *scr;
public:
    Food (sf:: Vector2f location);
    sf::RectangleShape getFood();
    void drawFood(sf:: RenderWindow *);
    void setFood();
    ~Food(){
        cout << "Food" << endl;
    }
};

 
#endif /* Food_h */
