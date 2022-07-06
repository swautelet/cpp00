#include<string>
#include<iostream>
#include "Phonebook.hpp"

int	main()
{
	std::string str = "";
	std::string firstname;
	std::string lastname;
	std::string nickname;
	int i;
	Phonebook book;

	while (str != "EXIT")
	{
		std::cin >> str;
		if (str == "ADD")
		{
			std::cout << "Enter firstname :";
			std::cin >> firstname;
			std::cout << std::endl << "Enter lastname :";
			std::cin >> lastname;
			std::cout << std::endl << "Enter nickname :";
			std::cin >> nickname;
			std::cout << std::endl;
			book.addcontact(firstname, lastname, nickname);
		}
		else if (str == "SEARCH")
		{
			std::cin >> i;
			book.searchcontact(i);
		}
	}
}
