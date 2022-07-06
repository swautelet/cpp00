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
	std::string i;
	Phonebook book;

	while (str != "EXIT")
	{
		std::cout << "Enter ADD to add a contact SEARCH to search a contact or EXIT to exit and loose all your contact :" << std::endl;
		getline(std::cin, str);
		if (str == "ADD")
		{
			std::cout << "Enter firstname :";
			getline(std::cin, firstname);
			std::cout << "Enter lastname :";
			getline(std::cin, lastname);
			std::cout << "Enter nickname :";
			getline(std::cin, nickname);
			std::cout << "Enter phone :";
			getline(std::cin, phone);
			std::cout << "Enter darkest secret :";
			getline(std::cin, darkestsecret);
			book.addcontact(firstname, lastname, nickname, phone, darkestsecret);
		}
		else if (str == "SEARCH")
		{
			book.displaylist();
			std::cout  << "Enter the numero of the contact  you want to see : ";
			getline(std::cin, i);
			if (i.length() == 1)
				book.searchcontact(i[0]);
			else
				std::cout << "Ivalid output" << std::endl;
		}
		else if (str != "EXIT")
		{
			std::cout << "Error wrong input" << std::endl;
		}
	}
}
