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

void Phonebook::searchcontact(int i)
{
	if (i < 1 || i > 8)
	{
		std::cout << "Invalid contact number" << std::endl;
		return ;
	}
	else
	{
		contacts[i].displaycont();
	}
}