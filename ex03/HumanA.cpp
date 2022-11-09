#include "HumanA.hpp"

HumanA::HumanA (std::string new_name, Weapon &new_weapon): name(new_name), e_weapon(new_weapon)
{}

HumanA::~HumanA (void)
{}

void	HumanA::setName (std::string new_name)
{
	name = new_name;
}

void	HumanA::attack (void)
{
	std::cout << name << " attacks with his " << e_weapon.getType() << "\n";
}
