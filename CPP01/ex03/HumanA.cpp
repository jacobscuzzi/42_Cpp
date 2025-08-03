#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arm) : _name(name), _arm(arm)
{
}

HumanA::~HumanA()
{
	std::cout <<  "HumanA is dead. RIP. His name was " << _name << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their weapon: " << _arm.getType() << std::endl;
}