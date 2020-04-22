//
//  snake.h
//  PA-9
//
//  Created by will on 4/20/20.
//  Copyright © 2020 will. All rights reserved.
//

#ifndef snake_h
#define snake_h

#include <SFML/Graphics.hpp>
#include <list>
#include <random>

#include "Food.h"
#include "GameEngine.h"

using namespace std;


#define SNAKE_MAX_LENGTH 2000

class Snake
{
private:
    int snake_length;
    struct snake
    {
        int direction;// 1 is up, 2 is down, 3 is left, and 4 is right
        int changeDirection;
        double speendScale;
        sf::Color itemcolor;
        sf::Vector2f location;
        sf::Vector2f oldposition;
        //sf::RenderWindow *scr;
        sf::RectangleShape item = getRectangleAt(location, itemcolor);
        
    };
    struct snake player[2000];
//    list<sf::Vector2<int>> snake_direction_list;
//    sf::Vector2<int> lastDirection;
//    vector<sf::RectangleShape> body;
//
//    sf::RenderWindow *scr;
//    /*different colors in different parts*/
//    sf::Color colorBody;
//    sf::Color colorHead;
public:
    Snake();
    void drawSnake(sf::RenderWindow *);
    bool ateFood(Food *food);
    void moveSnake(Food * food, int tempdirection);
    //void moveSnake(int tempdirection);
    int control();
    int leaddirection(int);
    sf::Vector2f getmoveSnack();
    sf::RectangleShape getItem()
    {
        return player[0].item;
    }

    
};

#endif /* snake_h */
