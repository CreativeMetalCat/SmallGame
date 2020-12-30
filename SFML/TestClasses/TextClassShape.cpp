#include "TextClassShape.hpp"

Test::TestSprite::TestSprite(sf::String Name, sf::Sprite sprite, sf::Vector2f Location):CObject(Name),Sprite(sprite),Location(Location)
{
	Sprite.setPosition(Location);
}

Test::TestSprite::TestSprite(sf::String Name, sf::Texture texture, sf::Vector2f Location):CObject(Name),Sprite(texture),Location(Location)
{
	Sprite.setPosition(Location);
	Texture = texture;
}

Test::TestSprite::TestSprite(sf::String Name, sf::String texturePath, sf::Vector2f Location):CObject(Name),Location(Location)
{
	if (Texture.loadFromFile(texturePath))
	{
		Sprite.setTexture(Texture);
	}
	else
	{
		//when failed to load image
	}
	Sprite.setPosition(Location);
}

void Test::TestSprite::Draw(sf::RenderWindow& window)
{
	window.draw(Sprite);
}

void Test::TestSprite::Destroy()
{
	isPendingKill = true;
	Texture.~Texture();
}
