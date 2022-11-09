#include <iostream>

class Zombie
{
	std::string	name;

	public:
	Zombie (std::string new_name);
	~Zombie (void);

	void	announce (void);
};

Zombie *newZombie (std::string name);
void	randomChump(std::string name);

