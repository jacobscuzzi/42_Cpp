#include "Harl.hpp"

Harl::Harl( void )
{
	std::cout << "Created Harl, hes ready to complain" << std::endl;
}

		
Harl::~Harl( void )
{

}


void Harl::debug( void )
{
	std::cout << "I dont know why im so grumpy" << std::endl;
}
void Harl::info( void )
{
	std::cout << "Something to eat would be nice no?"<< std::endl;
}
void Harl::warning( void )
{
	std::cout << "I really need food , right now, im hungryyyy" << std::endl;
}
void Harl::error( void )
{
	std::cout << "Im starving its to late" << std::endl;
}

void Harl::complain( std::string level)
{
	std::string levels[] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Harl::*functions[]) (void) =
	{
		&Harl::debug(),
		&Harl::info(),
		&Harl::warning(),
		&Harl::error()
	}

	for(int i;  = 0; i++ < 4)
	{
		if (level == levels[i])
		{
			this->*functions[i];
			return ;
		}
	}
}