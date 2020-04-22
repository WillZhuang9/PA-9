
//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "GameEngine.h"
#include "snake.h"
// Here is a small helper for you! Have a look.
//#include "ResourcePath.hpp"

int main()
{
    // Create the main window
    //sf::Color color = sf::Color :: Red;
    sf::RenderWindow window(sf::VideoMode(600,600), "Snake C++");
    window.setFramerateLimit(30);
    
//    sf::Vector2f loc =sf::Vector2f(300,300);
//
//    sf::RectangleShape food = getRectangleAt(loc, sf::Color::White);
//    int i = 0;
    
    Snake player;
    Food food(sf::Vector2f(400,300));
    
    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        window.clear();
        //window.draw(playe);
        //while(player.)
        player.drawSnake(&window);
        food.drawFood(&window);
        //window.draw(player.getItem());
        window.display();
    }
    return 0;
}
