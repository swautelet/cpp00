#include "Contact.hpp"

contact::contact(void)
{
	return ;
}

contact::~contact(void)
{
	return ;
}

void	contact::displaycont(void)
{
	std::cout << "index : " << this->index << std::endl;
	std::cout << "firstname : " << this->firstname << std::endl;
	std::cout << "lastname : " << this->lastname << std::endl;
	std::cout << "nickname : " << this->nickname << std::endl;
	std::cout << "phone : " << this->phone << std::endl;
	std::cout << "darkest secret : " << this->darkestsecret << std::endl;
}

void	contact::setindex(int i)
{
	this->index = i;
}

void	contact::setnames(std::string firstname, std::string lastname, std::string nickname, std::string phone, std::string darkestsecret)
{
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
	std::cout << this->index << "         |";
	if (this->firstname.length() > 10)
	{
		std::cout << this->firstname.substr(0, 9) << ".|";
	}
	else
	{
		std::cout << this->firstname;
		for (unsigned long len = 10; len > this->firstname.length(); len--)
			std::cout << " ";
		std::cout << "|";
	}
	if (this->lastname.length() > 10)
	{
		std::cout << this->lastname.substr(0, 9) << ".|";
	}
	else
	{
		std::cout << this->lastname;
		for (unsigned long len = 10; len > this->lastname.length(); len--)
			std::cout << " ";
		std::cout << "|";
	}
	if (this->nickname.length() > 10)
	{
		std::cout << this->nickname.substr(0, 9) << ".";
	}
	else
	{
		std::cout << this->nickname;
		for (unsigned long len = 10; len > this->nickname.length(); len--)
			std::cout << " ";
	}
	std::cout << std::endl;
}