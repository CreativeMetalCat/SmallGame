#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>

#include "TestClasses/TextClassShape.hpp"

#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200),"It works!");
	Test::TestShape* shape = new Test::TestShape(200, sf::Color::Red);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		shape->Draw(window);
		window.display();
	}


	return 0;
}