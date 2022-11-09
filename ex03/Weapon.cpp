#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon (std::string new_type): type(new_type)
{}

Weapon::Weapon (void)
{}

Weapon::~Weapon (void)
{}

std::string &Weapon::getType (void)
{
	return(type);
}

void	Weapon::setType (std::string &new_type)
{
	type = new_type;
}

#endif
