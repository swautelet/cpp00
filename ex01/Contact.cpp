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