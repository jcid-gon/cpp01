#include "Weapon.hpp"


class HumanA
{
	std::string	name;
	Weapon		&e_weapon;

	public:
	HumanA (std::string new_name, Weapon &new_weapon);
	~HumanA (void);

	void	setName (std::string new_name);
	void	attack (void);
};
