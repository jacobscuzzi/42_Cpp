#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
	std::cout <<  "HumanB is dead. RIP. His name was " << _name << std::endl;
}

void HumanB::attack()
{
	std::cout << _name << "attacks with their" << _arm->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &arm)
{
	_arm = &arm;
}
