#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

void	display_maj(char *str)
{
	std::string string0(str);
	std::transform(string0.begin(), string0.end(), string0.begin(), ::toupper);
	std::cout << string0;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		display_maj(argv[i]);
	}
	std::cout << std::endl;
    return 0;
}