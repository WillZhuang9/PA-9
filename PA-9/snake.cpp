//
//  snake.cpp
//  PA-9
//
//  Created by will on 4/20/20.
//  Copyright © 2020 will. All rights reserved.
//

#include "snake.h"

Snake::Snake()
{
    player[0].location = sf::Vector2f(300,300);
    player[0].oldposition = player[0].location;
    player[0].itemcolor = sf::Color :: Green;
    snake_length = 1;
    player[0].direction = 3;
    player[0].changeDirection =player[0].direction;
    player[0].item = getRectangleAt(player[0].location,player[0].itemcolor);
    
}

void Snake::drawSnake(sf::RenderWindow * scr)
{
    for (int i = 0; i < snake_length; ++i)
    {
        scr->draw(player[i].item);
    }
}
bool Snake::ateFood(Food *food)
{
    if(checkCollision(player[0].item, food->getFood()) )
    {
        snake_length++;
        sf::Vector2f temp = player[0].item.getPosition();
        int dx = temp.x;
        int dy = temp.y;
        player[snake_length - 1].itemcolor = sf::Color::White; // body is white
        player[snake_length - 1].location = player[snake_length].oldposition;
        
        //player[snake_length - 1].location = player[0].location;
        //player[snake_length - 1].direction = player[0].direction;
        //player[snake_length - 1].changeDirection =player[snake_length - 1].direction;
        //player[snake_length - 1].oldposition =player[snake_length - 2].location;
        player[snake_length - 1].item = getRectangleAt(player[snake_length - 1].location, player[snake_length - 1].itemcolor);
        return true;
    }
    else
        return false;
}
void Snake::moveSnake(Food * food, int direction)
//void Snake::moveSnake( int tempdirection)
{
    int dx, dy;
       //leaddirection(direction);
        if(ateFood(&*food))
        {
            food->setFood();
        }
        for (int i = 0; i < snake_length; ++i)
        {
            sf::Vector2f temp = player[i].item.getPosition();
            dx = temp.x, dy = temp.y;
            if(i == 0)
            {
                player[i].oldposition = player[i].location;
                if (direction != 0)
                {
                    player[i].direction = direction;
                     if(player[i].direction == 1)
                    {
                        player[i].item.setPosition(dx, dy - 5); //up
                        player[i].location = sf::Vector2f(dx, dy - 5);
                    }
                    if(player[i].direction == 2)
                    {
                        player[i].item.setPosition(dx, dy + 5); //down
                        player[i].location = sf::Vector2f(dx, dy + 5);
                    }
                    if(player[i].direction == 3)
                    {
                        player[i].item.setPosition(dx - 5, dy); //left
                        player[i].location = sf::Vector2f(dx - 5, dy);
                    }
                    if(player[i].direction == 4)
                    {
                        player[i].item.setPosition(dx + 5, dy); //right
                        player[i].location = sf::Vector2f(dx + 5, dy);
                    }
                }
            
                if (direction == 0)
                {
                    if(player[i].direction == 1)
                    {
                        player[i].item.setPosition(dx, dy - 5); //up
                        player[i].location = sf::Vector2f(dx, dy - 5);
                    }
                    if(player[i].direction == 2)
                    {
                        player[i].item.setPosition(dx, dy + 5); //down
                        player[i].location = sf::Vector2f(dx, dy + 5);
                    }
                    if(player[i].direction == 3)
                    {
                        player[i].item.setPosition(dx - 5, dy); //left
                        player[i].location = sf::Vector2f(dx - 5, dy);
                    }
                    if(player[i].direction == 4)
                    {
                        player[i].item.setPosition(dx + 5, dy); //right
                        player[i].location = sf::Vector2f(dx + 5, dy);
                    }
                }
                
            }
            
            if(i >= 1)
            {
                player[i].oldposition = player[i].location;
                player[i].location = player[i - 1].oldposition;
                player[i].item = getRectangleAt(player[i].location, player[i].itemcolor);
                
            }
        }

        
//        if(player[i].location != player[i].temp)// The coordinator that don't need to change direction of moving
//        {
//            sf::Vector2f temp = player[i].item.getPosition();
//            dx = temp.x, dy = temp.y;
//       // if ()
//            if(player[i].direction == 1)
//            {
//                player[i].item.setPosition(dx, dy - 5); //up
//                player[i].location = sf::Vector2f(dx, dy - 5);
//            }
//            if(player[i].direction == 2)
//            {
//                player[i].item.setPosition(dx, dy + 5); //down
//                player[i].location = sf::Vector2f(dx, dy + 5);
//            }
//            if(player[i].direction == 3)
//            {
//                player[i].item.setPosition(dx - 5, dy); //left
//                player[i].location = sf::Vector2f(dx - 5, dy);
//            }
//            if(player[i].direction == 4)
//            {
//                player[i].item.setPosition(dx + 5, dy); //right
//                player[i].location = sf::Vector2f(dx + 5, dy);
//            }
//            player[i].temp = player[i].location;
//            player[i].direction = player[i].changeDirection;
//        }
//        else if(player[i].location == player[i].temp)// The coordinator that need to change direction of moving
//        {
//            sf::Vector2f temp = player[i].item.getPosition();
//            dx = temp.x;
//            dy = temp.y;
//            if(player[i].changeDirection == 1)
//            {
//                player[i].item.setPosition(dx, dy - 5); //up
//                player[i].location = sf::Vector2f(dx, dy - 5);
//            }
//            if(player[i].changeDirection == 2)
//            {
//                player[i].item.setPosition(dx, dy + 5); //down
//                player[i].location = sf::Vector2f(dx, dy + 5);
//            }
//            if(player[i].changeDirection == 3)
//            {
//                player[i].item.setPosition(dx - 5, dy); //left
//                player[i].location = sf::Vector2f(dx - 5, dy);
//            }
//            if(player[i].changeDirection == 4)
//            {
//                player[i].item.setPosition(dx + 5, dy); //right
//                player[i].location = sf::Vector2f(dx + 5, dy);
//            }
//            player[i + 1].temp = player[i].temp;
//            player[i + 1].changeDirection = player[i].changeDirection;
//            player[i].temp = player[i].location;
//            player[i].direction = player[i].changeDirection;
//        }
//
}
int Snake::control()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        return 1;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        return 2;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        return 3;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        return 4;
    return 0;
}
int Snake::leaddirection(int direction)
{
   if(player[0].direction != direction)
   {
      // player[1].temp = player[0].location;
       //player[0].temp = player[0].location;
       player[0].changeDirection = direction;
       player[0].direction = direction;
       player[1].changeDirection = direction;
       return 1;
   }
    return 0;
}
