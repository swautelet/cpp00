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
	std::cout << this->index << std::endl;
	std::cout << this->firstname << std::endl;
	std::cout << this->lastname << std::endl;
	std::cout << this->nickname << std::endl;
}

void	contact::setindex(int i)
{
	this->index = i;
}

void	contact::setnames(std::string firstname, std::string lastname, std::string nickname)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
}