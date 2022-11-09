#include "HumanB.hpp"

HumanB::HumanB (std::string new_name): name(new_name), e_weapon(nullptr)
{}

HumanB::~HumanB (void)
{}

void	HumanB::setName (std::string new_name)
{
	name = new_name;
}

void	HumanB::setWeapon (Weapon &new_weapon)
{
	e_weapon = &new_weapon;
}

void	HumanB::attack (void)
{
	std::cout << name << " attacks with his " << e_weapon->getType()<< "\n";
}
