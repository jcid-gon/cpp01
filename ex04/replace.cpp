#include "replace.hpp"

std::string	str_prep (std::string line, std::string toReplace, std::string replaceWith)
{
	std::size_t	pos;
	std::string	ret;

	ret = line;
	pos = ret.find(toReplace);
	while (pos != std::string::npos)
	{
		std::string temp = ret.substr(0, pos) + replaceWith + ret.substr(pos + toReplace.length(), ret.length());
		ret = temp;
		pos = ret.find(toReplace, pos + replaceWith.length());
	}
	return (ret);
}

void	replace (std::string filename, std::string toReplace, std::string replaceWith)
{
	std::ifstream	fileIn (filename);
	std::ofstream	fileOut (filename + ".replace");
	std::string	line;

	if (fileIn.is_open() && fileOut.is_open())
	{
		std::cout << "File opened\n";
		std::cout << "Rewrinting...\n";
		while (getline (fileIn, line))
		{
			line = str_prep(line, toReplace, replaceWith);
			fileOut << line << "\n";
		}
		std::cout << "Done!\n";
		
	}
	else
		std::cout << "Couldn't open file\n";
}
