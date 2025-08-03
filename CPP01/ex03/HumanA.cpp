#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arm) : _name(name), _arm(arm)
{
	std::cout << "Once upon a time there was a new Human, of the type A. His name was "
		<< _name << " and he was born with an arm of the type: " << _arm.getType() << std::endl;
	sleep(2);
}

HumanA::~HumanA()
{
	std::cout <<  "HumanA is dead. RIP. His name was " << _name << std::endl;
	sleep(2);
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their weapon: " << _arm.getType() << std::endl;
	sleep(2);
}