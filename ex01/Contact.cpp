#include "Contact.hpp"

contact::contact(void)
{
	this->flagset = 0;
	return ;
}

contact::~contact(void)
{
	return ;
}

void	contact::displaycont(void)
{
	if (this->flagset)
	{
		std::cout << "index : " << this->index << std::endl;
		std::cout << "firstname : " << this->firstname << std::endl;
		std::cout << "lastname : " << this->lastname << std::endl;
		std::cout << "nickname : " << this->nickname << std::endl;
		std::cout << "phone : " << this->phone << std::endl;
		std::cout << "darkest secret : " << this->darkestsecret << std::endl;
	}
	else
	{
		std::cout << "this contact is empty" << std::endl;
	}
}

void	contact::setindex(int i)
{
	this->index = i;
}

void	contact::setnames(std::string firstname, std::string lastname, std::string nickname, std::string phone, std::string darkestsecret)
{
	this->flagset = 1;
	this->firstname = firstname;
	// std::cout << "firstname setted" << std::endl;
	this->lastname = lastname;
	// std::cout << "lastname setted" << std::endl;
	this->nickname = nickname;
	// std::cout << "nickname setted" << std::endl;
	this->phone = phone;
	this->darkestsecret = darkestsecret;
}

void	contact::minidisplay(void)
{
	if (this->flagset)
	{
		std::cout << std::setw(10);
		std::cout << this->index << "|";
		if (this->firstname.length() > 10)
			std::cout << this->firstname.substr(0, 9) << "." << "|";
		else
		{
			std::cout << std::setw(10);
			std::cout << this->firstname << "|";
		}
		if (this->lastname.length() > 10)
			std::cout << this->lastname.substr(0, 9) << "." << "|";
		else
		{
			std::cout << std::setw(10);
			std::cout << this->lastname << "|";
		}
		if (this->nickname.length() > 10)
			std::cout << this->nickname.substr(0, 9) << "." << std::endl;
		else
		{
			std::cout << std::setw(10);
			std::cout << this->nickname << std::endl;
		}
	}

}