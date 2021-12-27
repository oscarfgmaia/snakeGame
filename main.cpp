#include "SFML/Graphics/Color.hpp"
#include "SFML/System/Vector2.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{
    const int rows = 30;
    const int columns = 40;

    sf::RectangleShape tileset[rows][columns];
    
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    sf::RectangleShape tiles(sf::Vector2(20.f,20.f));
    tiles.setOutlineThickness(1);
    tiles.setOutlineColor(sf::Color::White);
    tiles.setFillColor(sf::Color(0,0,0));
    float posX = 0;
    float posY = 0;

    sf::Vector2f rectPos(posX,posY);

    sf::CircleShape player(10.f);
    player.setFillColor(sf::Color::Green);
    

    // run the program as long as the window is open
   
    for(size_t i = 0; i < rows;i++ )
    {
        for (size_t j =0; j < columns; j++) 
        {
            tileset[i][j] = tiles;
            tileset[i][j].setPosition(rectPos);
            std::cout << "i: "<<i<<" j:"<< j<< " posX: " <<rectPos.x << " posY: " << rectPos.y<< std::endl;
            if(rectPos.x <= 800)
            {
                rectPos.x += 20;
                if(j==39)
                {
                    rectPos.x += 20;
                    rectPos.x = 0;
                }
            }
        }
        rectPos.y += 20;
    }

    player.setPosition(tileset[14][15].getPosition());

    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;    
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
                       
        }
        if()
        {
            std::cout << "D was pressed"<<std::endl;
        }

        // draw everything here...
        // window.draw(...);

        window.clear(sf::Color::Black);
        
        for(size_t i = 0; i < rows;i++ )
        {
            for (size_t j =0; j < columns; j++) 
            {
                window.draw(tileset[i][j]);
            }
        }
        window.draw(player);
        window.display();
    }

    return 0;
}