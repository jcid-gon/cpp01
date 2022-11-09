#include "Zombie.hpp"

int	main()
{
	Zombie *zombie_horde = zombieHorde(6, "Alberto");
	for (int i = 0; i < 6 ;i++)
		zombie_horde[i].announce();
	delete [] zombie_horde;
}
