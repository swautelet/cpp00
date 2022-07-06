#include<string>
#include<iostream>
#include "Phonebook.hpp"

int	main()
{
	std::string str = "";
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone;
	std::string darkestsecret;
	char i;
	Phonebook book;

	while (str != "EXIT")
	{
		std::cout << "Enter ADD to add a contact SEARCH to search a contact or EXIT to exit and loose all your contact :" << std::endl;
		std::cin >> str;
		if (str == "ADD")
		{
			std::cout << "Enter firstname :";
			std::cin >> firstname;
			std::cout << "Enter lastname :";
			std::cin >> lastname;
			std::cout << "Enter nickname :";
			std::cin >> nickname;
			std::cout << "Enter phone :";
			std::cin >> phone;
			std::cout << "Enter darkest secret :";
			std::cin >> darkestsecret;
			book.addcontact(firstname, lastname, nickname, phone, darkestsecret);
		}
		else if (str == "SEARCH")
		{
			book.displaylist();
			std::cout  << "Enter the numero of the contact  you want to see : ";
			std::cin >> i;
			switch (i)
			{
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
					book.searchcontact(i);
				break ;
				default:
					std::cout << "Ivalid output" << std::endl;
			}
		}
		else if (str != "EXIT")
		{
			std::cout << "Error wrong input" << std::endl;
		}
	}
}
