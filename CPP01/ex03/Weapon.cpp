#include "Weapon.hpp"

Weapon::Weapon(std::string type_parameter)
{
	_type = type_parameter;
	std::cout << "The Weapon: '" << _type << "' has been created. Lets have war!" << std::endl;
	sleep(2);
}

Weapon::~Weapon()
{
	std::cout << "The Weapon: '" << _type << "' is destroyed. Lets have peace!" << std::endl;
	sleep(2);
}


void	Weapon::setType(std::string type)
{
	std::cout << "The Weapon: '" << _type << "' has been changed to the new type: " << type << std::endl;
	_type = type;
	sleep(2);
}

const std::string	Weapon::getType(void)
{
	return (_type);
}