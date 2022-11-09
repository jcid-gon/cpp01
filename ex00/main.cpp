#include "Zombie.hpp"

int	main()
{
	std::cout << "Creating Zombie named Tomas via constructor\n";
	Zombie tomas("Tomas");
	tomas.announce();

	std::cout << "\nCreating Zombie named charlie via newZombie function\n";
	Zombie *charlie = newZombie("Charlie");
	charlie->announce();
	delete charlie;

	std::cout << "\nCreating Zombie via randomChump function\n";
	randomChump ("Tom");
}
