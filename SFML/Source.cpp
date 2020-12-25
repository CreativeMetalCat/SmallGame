#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200),"It works!");

	while (window.isOpen())
	{
		window.clear();
		window.display();
	}

	return 0;
}