#include <SFML/Graphics.hpp>

#define RAD 50
#define FPS 30

sf::RenderWindow window(sf::VideoMode(800, 600), "WINDOW_TITLE");

void zalupa(sf::CircleShape circle) {                           //На вход принимает круг, для которого уже прописаны все параметры. Рисует его там, где щелкнула мышь
    
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
                return;
            }
            case sf::Event::MouseButtonPressed:
            {  
                circle.setPosition(event.mouseButton.x - RAD, event.mouseButton.y - RAD);
            }
            }
        }

        window.clear();
        window.draw(circle);
        window.display();
    }
}

int main()
{
    window.setFramerateLimit(FPS);
    sf::CircleShape circle(RAD);
    circle.setOutlineThickness(5); // устанавливаем толщину контура круга
    circle.setOutlineColor(sf::Color(80, 220, 50)); // устанавливаем цвет контура
    

    zalupa(circle);
    

        
}
