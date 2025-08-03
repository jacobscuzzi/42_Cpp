#include "Weapon.hpp"

Weapon::Weapon(std::string type_parameter)
{
	_type = type_parameter;
}

Weapon::~Weapon()
{
	std::cout << "The Weapon: '" << _type << "' is destroyed. Lets have peace!" << std::endl;
}


void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string	Weapon::getType(void)
{
	return (_type);
}