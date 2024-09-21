#include <SFML/Graphics.hpp>

/**
 * Entry point of the program.
 *
 * Creates a window with the title "SFML TUTORIAL" and a blue circle
 * shape in the middle of it. The window remains open until the user
 * closes it.
 *
 * @return 0 if no errors occurred.
 */
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML TUTORIAL");
    sf::CircleShape shape(200.f);
    shape.setFillColor(sf::Color::Blue);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}