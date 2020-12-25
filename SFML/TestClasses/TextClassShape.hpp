#include <SFML/Graphics.hpp>

class TestShape 
{
public:
	sf::CircleShape shape;

	float CircleRaius = 200;

	sf::Color color;

	TestShape(float _CircleRaius, sf::Color _color) :CircleRaius(_CircleRaius)
	{
		shape.setRadius(CircleRaius);

	}
};