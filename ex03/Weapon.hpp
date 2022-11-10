#include <iostream>
#include <string>

class Weapon
{
	std::string	type;

	public:
	
	Weapon (std::string new_type);
	Weapon (void);
	~Weapon (void);
	
	std::string &getType(void);
	void setType(std::string new_type);
};
