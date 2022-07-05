#include"Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->i = 0;
}

Phonebook::~Phonebook(void)
{

}

void	Phonebook::addcontact(contact con)
{
	this->contacts[this->i]=con;
	this->i++;
}

contact Phonebook::searchcontact(char *str)
{

}