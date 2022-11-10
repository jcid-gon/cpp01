#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	std::string	name;
	Weapon		*e_weapon;

	public:
	HumanB (std::string new_name);
	~HumanB (void);

	void	setName (std::string new_name);
	void	setWeapon (Weapon &new_weapon);
	void	attack (void);
};
