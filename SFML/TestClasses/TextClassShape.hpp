#include <SFML/Graphics.hpp>

namespace Test 
{
	class TestShape
	{
	public:
		sf::CircleShape shape;

		float CircleRaius = 200;

		sf::Color color;

		TestShape(float _CircleRaius, sf::Color _color) :CircleRaius(_CircleRaius), color(_color)
		{
			shape.setRadius(CircleRaius);
			shape.setFillColor(_color);
		}

		virtual void Draw(sf::RenderWindow &window)
		{
			window.draw(shape);
		}

		virtual void Destroy()
		{
			//clean memory here
		}
	};
}