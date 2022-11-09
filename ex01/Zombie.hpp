#include <iostream>

class Zombie
{
	std::string	name;

	public:
	Zombie (std::string new_name);
	Zombie (void);
	~Zombie (void);
	
	void	give_name(std::string new_name);
	void	announce (void);
	std::string	get_name(void);
};

Zombie *zombieHorde (int N, std::string name);

