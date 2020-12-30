#pragma once
#include <SFML/System.hpp>
/*base class for every object in this project*/
class CObject
{
private:
protected:
	sf::String Name = "Object";

	bool isPendingKill = false;
public:
	CObject(sf::String Name);

	virtual sf::String ToString();

	virtual sf::String GetName() { return Name; }

	virtual void Destroy() = 0;
};

