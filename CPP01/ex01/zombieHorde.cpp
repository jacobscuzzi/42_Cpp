 #include "Zombie.hpp"
 
 Zombie* zombieHorde( int N, std::string name )
 {
	Zombie *zombie_horde;

	if (N < 1)
	{
		std::cout << "I need a number that is bigger than 0 bro" << std::endl;
		return nullptr;
	}
	zombie_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie_horde[i].setName(name);
	}
	return zombie_horde;
}

