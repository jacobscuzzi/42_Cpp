
#include "Zombie.hpp" 

int	main(void)
{

	std::string name_input_heap;
	std::string name_inputp_stack;
	Zombie		*ZombieHeap;

	std::cout << "Welcome to Zombie land !" << std::endl;
	sleep(1);
	std::cout << "Today we will create 2 zombies, one on the heap and on on the stack" << std::endl;
	sleep(1);
	std::cout << "This wil be fuuuuuuuuuuun" << std::endl;
	sleep(5);
	std::cout << "Lets start this, we will start with a heap zombie" << std::endl;
	sleep(1);
	std::cout << "Give our baby zombie a name: ";
	std::cin >> name_input_heap;
	std::cout << "Here comes the Heap Zombie...." << std::endl;
	ZombieHeap = newZombie(name_input_heap);
	ZombieHeap->announce();
	std::cout << "Now lets delete the heap zombie" << std::endl;
	delete ZombieHeap;
	sleep(5);
	std::cout << "Oh wow, this shit was scary, lets look how this turns out on the stack" << std::endl;
	sleep(1);
	std::cout << "Give our second baby zombie from the stack a name: ";
	sleep(1);
	std::cin >> name_inputp_stack;
	randomChump(name_inputp_stack);
}