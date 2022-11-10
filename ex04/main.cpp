#include "replace.hpp"

void	print_error(std::string str)
{
	std::cout << "Error;" << str << "\n";
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		print_error("Invalid number of arguments");
		return (1);
	}
	replace(argv[1], argv[2], argv[3]);
	return (0);
}

