#include <iostream>

int	main ()
{
	std::string str= "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Direction base: " << &str << "\n";
	std::cout << "Direction pointer: " << stringPTR << "\n";
	std::cout << "Direction reference: " << &stringREF << "\n\n";

	std::cout << "String base: " << str << "\n";
	std::cout << "String pointer: " << *stringPTR << "\n";
	std::cout << "String reference: " << stringREF << "\n"; 	
}
