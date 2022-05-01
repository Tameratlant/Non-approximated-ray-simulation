#include <SFML/Graphics.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "WINDOW_TITLE");
    window.setFramerateLimit(50);
    sf::CircleShape circle(50.f);
    while (window.isOpen())
    {
        sf::Event event;
        
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                {
                    window.close();
                    return 0;
                }
                case sf::Event::MouseButtonPressed:
                {
                    circle.setOutlineThickness(15.f); // устанавливаем толщину контура круга
                    circle.setOutlineColor(sf::Color(80, 220, 50)); // устанавливаем цвет контура
                    circle.setPosition(event.mouseButton.x, event.mouseButton.y);
                }
            }
        }

        window.clear();
        window.draw(circle);
        window.display();
    }
}
