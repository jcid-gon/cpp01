#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *new_zombie = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		new_zombie[i].give_name(name);
		std::cout << new_zombie[i].get_name() << " " << i + 1 << " raises from the ground.\n";
	}
	return (new_zombie);
}
