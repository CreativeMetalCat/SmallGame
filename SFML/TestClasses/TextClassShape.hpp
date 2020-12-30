#pragma once
#include <Base/Object.h>
#include <SFML/Graphics.hpp>


namespace Test 
{
	class TestSprite :public CObject
	{
	protected:
		sf::Texture Texture;
	public:
		sf::Vector2<float> Location;

		sf::Sprite Sprite;

		TestSprite(sf::String Name,sf::Sprite sprite, sf::Vector2f Location);

		TestSprite(sf::String Name,sf::Texture texture, sf::Vector2f Location);

		TestSprite(sf::String Name, sf::String texturePath, sf::Vector2f Location);

		virtual void Draw(sf::RenderWindow& window);

		virtual void Destroy()override;
	};
}