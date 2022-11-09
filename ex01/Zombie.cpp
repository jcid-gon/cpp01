#include "Zombie.hpp"

Zombie::Zombie (std::string new_name)
{
	name = new_name;
	std::cout << name <<" raises from the ground.\n";
}

Zombie::Zombie (void)
{
	name = "";
}

Zombie::~Zombie (void)
{
	std::cout << name << " crumbles into dust.\n";
}

void	Zombie::announce (void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::give_name (std::string new_name)
{
	name = new_name;
}

std::string	Zombie::get_name (void)
{
	return(name);
}
