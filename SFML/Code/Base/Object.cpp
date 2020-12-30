#include "Object.h"

sf::String CObject::ToString()
{
	return sf::String("Object");
}

CObject::CObject(sf::String Name):Name(Name)
{
}
