#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "A new Zombie is born, its name is: " << _name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "A zombie passed a way. RIP: " << _name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ':' << ": BraiiiiiiinnnzzzZ..." << std::endl;
}