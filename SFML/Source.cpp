#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>

#include "TestClasses/TextClassShape.hpp"

#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200),"It works!");
	Test::TestSprite* sprite = new Test::TestSprite("test", "Assets/PlaceHolderCharacter.png", sf::Vector2f(0, 0));
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				sprite->Destroy();
				window.close();
			}
		}
		window.clear();
		sprite->Draw(window);
		window.display();
	}


	return 0;
}